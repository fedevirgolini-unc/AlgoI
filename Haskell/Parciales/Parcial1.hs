--Primer parcial HasKell

--Ejercico 1
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] _ = False
existe' (x:xs) t = t x || existe' xs t

estaEnDNI :: Int -> Bool           
estaEnDNI x = existe' [4,2,6,9,2,4,6,0] (x ==)

--Ejercicio 2
cuentaDNI :: [Int] -> Int
cuentaDNI [] = 0
cuentaDNI (x:xs) | estaEnDNI x = 1 + cuentaDNI xs
                 | otherwise = cuentaDNI xs

-- Ejercicioi 3
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] _ = 0
sumatoria' (x:xs) t = t x + sumatoria' xs t

auxiliar :: Int -> Int
auxiliar x | estaEnDNI x = 1
           | otherwise = 0

cuentaDNI' :: [Int] -> Int
cuentaDNI' x = sumatoria' x auxiliar

-- Ejercicio 4

concatenarTuplas :: [(a, a)] -> (a, a)

separar :: [a] -> (a -> Bool) -> ([a],[a])
separar [] _ = ([], [])
separar (x:xs) t | t x = concatenarTuplas [(x, []) , separar xs t]
                 | otherwise = concatenarTuplas [([], x) , separar xs t]
