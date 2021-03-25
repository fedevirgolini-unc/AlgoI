#include <stdio.h>

int main(void)
 {
    //Declaramos variables
    int x, y, z;
    
    //Ingreso de datos
    printf("Ingrese un valor para x:\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
    
    //Proceso y salida de resultados
    printf("Para los valores x=%d; y=%d; z=%d:\n", x, y, z);
    printf("x + y + 1 = %d\n", (x+y+1));
    printf("z * z + y * 45 - 15 * x = %d\n", (z*z+y*45-15*x));
    printf("y - 2 == (x * 3 + 1) % 5 = %d\n", (y - 2 == (x * 3 + 1) % 5));
    printf("y / 2 * x = %d\n", (y/2*x));
    printf("y < x * z = %d\n", (y<x*z));
 }

/* TABLA EJERCICIO 1

Expresión                  | x=7; y=3; z=5 | x=1; y=10; z=8
x + y + 1                  |    11         |    12
z * z + y * 45 - 15 * x    |    55         |    499
y - 2 == (x * 3 + 1) % 5   |    0          |    0
y / 2 * x                  |    7          |    5
y < x * z                  |    1          |    0


En la ultima expresion, si bien el resultado representa un dato de tipo Bool, en C este dato es de tipo int
*/

/*
comentario
*/

//linea de comentario
