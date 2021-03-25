-- Proyecto 2
--Ejercicio 1
-- a (Incluye el ejercicio 2a)
data Carrera = Matematica | Fisica | Computacion | Astronomia deriving (Eq, Ord, Show)
-- b
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematica"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en Ciencias de la Computacion"
titulo Astronomia = "Liccenciatura en Astronomia"

--Ejercicio 3
--a
type Ingreso = Int

data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving (Eq, Show)
data Area = Administrativa | Ensennanza | Economica | Postgrado deriving (Show)

data Persona = Decane
             | Docente Cargo
             | NoDocente Area
             | Estudiante Carrera Ingreso
             deriving (Show)
--b
--El tipo del constructor docente es algebraico
--c
cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc [] _ = 0
cuantos_doc (Docente x:xs) c | x == c = 1 + cuantos_doc xs c
                             | otherwise = cuantos_doc xs c
cuantos_doc (_:xs) c = cuantos_doc xs c
--d
tieneCargo :: Cargo -> Persona -> Bool
tieneCargo c (Docente x) = x == c
tieneCargo _ _ = False

cuantos_doc' :: [Persona] -> Cargo -> Int
cuantos_doc' xs c = length (filter (tieneCargo c) xs)

--Ejercicio 4
--a
primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento (x:_) = Just x

--Ejercicio 5
data Cola = VaciaC | Encolada Persona Cola deriving Show
--a
--1
atender_aux :: Cola -> Cola
atender_aux (Encolada _ VaciaC) = VaciaC
atender_aux (Encolada x xs) = Encolada x (atender_aux xs)

atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada _ xs) = Just (atender_aux xs)

--2
encolar :: Persona -> Cola -> Cola
encolar x VaciaC = Encolada x VaciaC
encolar x ys = Encolada x ys
--3
busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC _ = Nothing
busca (Encolada x xs) c |tieneCargo c x = Just x
                        |otherwise = busca xs c
--b
-- El tipo cola es muy sililar al tipo lista de Haskell; donde VaciaC equivale a [] y (Encolada x xs) equivale a (x:xs)

--Ejercicio 6
data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b) deriving (Show)
--a
type GuiaTelefonica = ListaAsoc String Int
--b
--1
la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo _ _ xs) = 1 + la_long xs
--2
la_concat :: ListaAsoc a b-> ListaAsoc a b-> ListaAsoc a b
la_concat Vacia Vacia = Vacia
la_concat Vacia ys = ys
la_concat xs Vacia = xs
la_concat (Nodo x y zs) ys = Nodo x y (la_concat zs ys)
--3
la_pares :: ListaAsoc a b-> [(a, b)]
la_pares Vacia = []
la_pares (Nodo x y zs) = (x, y) : la_pares zs
--4
la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia _ = Nothing
la_busca (Nodo x y zs) a |x == a = Just y
                         |otherwise = la_busca zs a
--5
la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar _ Vacia = Vacia
la_borrar a (Nodo x y zs)| a == x = zs
                         |otherwise = Nodo x y (la_borrar a zs)

--Ejercicio 7
data Arbol a = Hoja | Rama (Arbol a) a (Arbol a) deriving (Show)

type Prefijos = Arbol String
can , cana , canario , canas , cant , cantar , canto :: Prefijos
can = Rama cana "can" cant
cana = Rama canario "a" canas
canario = Rama Hoja "rio" Hoja
canas = Rama Hoja "s" Hoja
cant = Rama cantar "t" canto
cantar = Rama Hoja "ar" Hoja
canto = Rama Hoja "o" Hoja

-- a
a_long :: Arbol a -> Int
a_long Hoja = 0
a_long (Rama xs _ ys) = 1 + a_long xs + a_long ys
-- b
a_hojas :: Arbol a -> Int
a_hojas Hoja = 0
a_hojas (Rama Hoja _ Hoja) = 1
a_hojas (Rama xs _ ys) = a_hojas xs + a_hojas ys
-- c
arbol_ejemplo = (Rama (Rama (Hoja) (2 :: Int) (Hoja)) 1 (Rama (Hoja) 3 (Hoja)))

a_inc :: Num a => Arbol a -> Arbol a
a_inc Hoja = Hoja
a_inc (Rama xs a ys) = (Rama (a_inc xs) (a+1) (a_inc ys))
-- d
a_map :: (a -> b) -> Arbol a -> Arbol b
a_map _ Hoja = Hoja
a_map t (Rama xs a ys) = (Rama (a_map t xs) (t a) (a_map t ys))

a_inc' :: Num a => Arbol a -> Arbol a
a_inc' a = a_map (1 +) a
