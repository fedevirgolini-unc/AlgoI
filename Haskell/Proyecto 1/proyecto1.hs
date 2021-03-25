-- Algoritmos y estructura de datos I
-- LABORATORIO
-- Proyecto 1


-- ejercicio 1
-- a
esCero :: Int -> Bool
esCero x = x == 0
-- b
esPositivo :: Int -> Bool
esPositivo x = 0 < x
-- c
esVocal :: Char -> Bool
esVocal x = x == 'a' || x == 'e' || x == 'i'|| x == 'o' || x == 'u'


-- ejercicio 2
-- a
paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (x:xs) = x == True && paratodo xs
-- b
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs
-- c
productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs
-- d
factorial :: Int -> Int
factorial 1 = 1
factorial x = x * factorial (x-1)
-- e
promedio :: [Int] -> Int
promedio [] = 0
promedio (x:xs) = div (sumatoria (x:xs))  (length(x:xs))


-- ejercicio 3
pertenece :: Int -> [Int] -> Bool
pertenece _ [] = False
pertenece y (x:xs) = y == x || pertenece y xs


--ejercicio 4
-- a
paratodo' :: [a] -> (a -> Bool) -> Bool
paratodo' [] _ = True
paratodo' (x:xs) t = t x && paratodo' xs t
-- b
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] _ = False
existe' (x:xs) t = t x || existe' xs t
-- c
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] _ = 0
sumatoria' (x:xs) t = t x + sumatoria' xs t
-- d
productoria' :: [a] -> (a -> Int) -> Int
productoria' [] _ = 1
productoria' (x:xs) t = t x * productoria' xs t


-- ejercico 5
paratodo'' :: [Bool] -> Bool
paratodo'' x = paratodo' x id


-- ejercicio 6
-- a
todosPares :: [Int] -> Bool
todosPares x = paratodo' x even
-- b
esMultiplo :: Int -> Int -> Bool
esMultiplo x y = mod y x == 0

hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo x y = existe' y (esMultiplo x)
-- c
cuadrado :: Int -> Int
cuadrado x = x * x

sumaCuadrados :: Int -> Int
sumaCuadrados x = sumatoria' [0..x] cuadrado
-- d
factorial' :: Int -> Int
factorial' x = productoria [1..x]
-- e
neutroImpares :: Int -> Int
neutroImpares x| even x = x
               | otherwise = 1

multiplicaPares :: [Int] -> Int
multiplicaPares x = productoria' x neutroImpares


-- ejercicio 7
-- a
-- map :: (a -> b) -> [a] -> [b]
-- Esta finciòn toma 2 argumentos: una funciòn y una lista. La lista resultante contiene a cada elemento de la lista ingresada despuès de haberle aplicado la funciòn.
-- filter :: (a -> bool) -> [a] -> [a]
-- Esta funciòn toma 2 argumentos: un predicado y una lista. La lista resultante contiene a aquellos elementos de la lista ingresada que cumplen con el predicado.
-- b
-- Esa expresiòn suma uno a cada elemento de la lista [1, -4, 6, 2, -8]. Por lo tanto, su equivalente serìa:
-- [2, -3, 7, 3, -7]
-- c
-- La lista resultante de esa expresiòn contiene solo los numeros pares de la original, es decir:
-- [-4, 6, 2, -8]


-- ejercicio 8
-- a _ Forma recursiva
todoPor2 :: [Int] -> [Int]
todoPor2 [] = []
todoPor2 (x:xs) = x * 2 : todoPor2 xs
-- b _ Utilizando map
todoPor2' :: [Int] -> [Int]
todoPor2' x = map (2*) x


-- ejercicio 9
-- a _ Forma recursiva
soloPares :: [Int] -> [Int]
soloPares [] = []
soloPares (x:xs)| mod x 2 == 0 = x : soloPares xs
                | otherwise = soloPares xs
-- b _ Utilizando filter
soloPares' :: [Int] -> [Int]
soloPares' x = filter even x
-- c
multiplicaPares' :: [Int] -> Int
multiplicaPares' x = productoria (filter even x)


-- ejercicio 10
-- a _ Forma recursiva
primIgualesA :: (Eq a) => a-> [a] -> [a]
primIgualesA _ [] = []
primIgualesA y (x:xs)| y == x = x : primIgualesA y xs
                     | otherwise = []
-- b _ Utilizando takeWhile
primIgualesA' :: (Eq a) => a-> [a] -> [a]
primIgualesA' y x = takeWhile (==y) x


-- ejercicio 11
-- a _ Forma recursiva
primIguales :: (Eq a) => [a]-> [a]
primIguales [] = []
primIguales [x] = [x]
primIguales (x:xs)| x == head xs = x : primIguales xs
                  | otherwise = [x]
-- b _ Sin utilizar recursiòn
primIguales' :: (Eq a) => [a]-> [a]
primIguales' x = primIgualesA' (head x) x


-- ejercicio 12
-- a
-- Està bien tipado; x :: (a, b); el patron cumple todos los casos de la definiciòn.
-- b
-- Està bien tipado, (x, y) :: (a, b); el patròn cubre todos los casos de la definiciòn.
-- c
-- NO està bien tipado, pues el argumento es una lista de tuplas y (x, y) es simplemente una tupla (:: (a, b))
-- d
-- Està bien tipado; x :: (a, b), xs :: [(a, b)]; el patròn cumple con todos los casos de la definiciòn.
-- e
-- Està bien tipado; (x, y) :: (a, b), (a, b) :: (a, b), xs :: [(a, b)]; el patròn NO cumple con todos los casos de la definiciòn.
-- f
-- Està bien tipado; [(0, a)] :: [(Int, a)]; el patròn NO cumple con todos los casos de la definiciòn.
-- g
-- Està bien tipado; (x, 1) :: (Int, a), xs :: [(Int, a)]; el patròn NO cumple con todos los casos de la definiciòn.
-- h
-- Està bien tipado; (1, x) :: (Int, a), xs :: [(Int, a)]; el patròn NO cumple con todos los casos de la definiciòn.
-- i
-- Està bien tipado; a :: Int -> Int, b :: Int; el patròn cumple con todos los casos de la definiciòn.
-- j
-- Està bien tipado; a :: Int -> Int, 3 :: Int; el patròn NO cumple con todos los casos de la definiciòn.
-- k
-- NO està bien tipado, pues f toma solo 2 argumentos (Uno de tipo Int -> Int y otro de tipo Int)
-- l
-- Està bien tipado; a :: a, g :: a -> a; el patròn cumple con todos los casos de la definiciòn.


-- ejercicio 13

