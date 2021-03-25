--SEGUNDO PARCIAL DE HASKELL

--Ejercicio 1
--data Verdura = Papa | Batata | Calabacin | Cebolla deriving Show
--type Unidades = Int

titulo :: Verdura -> String
titulo Papa = "Papa Blanca"
titulo Batata = "Batata Colorada"
titulo Calabacin = "Calabacin coreanito"
titulo Cebolla = "Cebolla morada"

--Ejercicio 2
--data Verdura = Papa | Batata | Calabacin | Cebolla deriving Show
--data Verduleria = Agregar Verdura Verduleria | NoQuedaNada

--verdurasIguales :: Verdura -> Verdura -> Bool
--verdurasIguales Papa Papa = True
--verdurasIguales Batata Batata = True
--verdurasIguales Calabacin Calabacin = True
--verdurasIguales Cebolla Cebolla = True
--verdurasIguales _ _ = False


--hay_verdura :: Verduleria -> Verdura -> Bool
--hay_verdura NoQuedaNada _ = False
--hay_verdura (Agregar x vs) v | verdurasIguales x v = True
--                             | otherwise = hay_verdura vs v
                             
--Ejercicio 3
data Verdura = Papa | Batata | Calabacin | Cebolla deriving Show
type Unidades = Int
data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b) deriving (Show)
type Verduleria = ListaAsoc Verdura Unidades

verduras_en_stock :: Verduleria -> [Verdura]
verduras_en_stock Vacia = []
verduras_en_stock (Nodo v c vs) | c > 0 = v : verduras_en_stock vs
                                | otherwise = verduras_en_stock vs
                                
--Ejercicio 4
data Arbol a = Hoja | Rama (Arbol a) a (Arbol a) deriving Show

a_podar :: Arbol a -> Arbol a
a_podar (Rama (Rama Hoja _ Hoja) as (Rama Hoja _ Hoja)) = (Rama Hoja as Hoja)
a_podar (Rama (Rama Hoja _ Hoja) as Hoja) = (Rama Hoja as Hoja)
a_podar (Rama (xs) as Hoja) = (Rama (a_podar xs) as Hoja)
a_podar (Rama Hoja as (Rama Hoja _ Hoja)) = (Rama Hoja as Hoja)
a_podar (Rama Hoja as (ys)) = (Rama Hoja as (a_podar ys))
a_podar (Rama (xs) as (ys)) = (Rama (a_podar xs) as (a_podar ys))

type Prefijos = Arbol String
can , cana , canario , canas , cant , cantar , canto :: Prefijos
can = Rama cana "can" cant
cana = Rama canario "a" canas
canario = Rama Hoja "rio" Hoja
canas = Rama Hoja "s" Hoja
cant = Rama cantar "t" canto
cantar = Rama Hoja "ar" Hoja
canto = Rama Hoja "o" Hoja
