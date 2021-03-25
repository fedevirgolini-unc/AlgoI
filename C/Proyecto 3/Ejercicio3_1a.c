#include <stdio.h>
#include <assert.h>

int main (void)
 {
    int x;
    printf("Ingrese un valor para x:\n");
    scanf("%d", &x);
    assert(x==1);
    x=5;
    printf("El valor de x es: %d\n", x);
    
 }
 
/*
Numero de ejecucion | estado inicial | estado final
        1           |       1        |      5
        2           |       2        |      5
        3           |       3        |      5

Este programa es especifico para que el usuario ingrese 1 (Requerimiento del punto 3.b);
en caso que se quiera usar otro valor, debe reemplazarse (o comentarse) la linea 9.
*/
