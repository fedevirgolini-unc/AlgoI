#include <stdio.h>
#include <assert.h>

int main (void)
 {
    int x, y;
    
    printf("Ingrese un valor para x:\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y:\n");
    scanf("%d", &y);
    
    assert(x==2 && y==5);
    
    x=x+y;
    y=y+y;
    
    printf("El valor de x e y es: %d, %d (respectivamente)\n", x, y);
 }
 
 /*
Numero de ejecucion | estado inicial | estado final
        1           |    x=2 y=5     |    x=7 y=10
        1           |    x=3 y=6     |    x=9 y=12
        1           |    x=5 y=8     |   x=13 y=16

Este programa es especifico para que el usuario ingrese x=2 e y=5 (Requerimiento del punto 3.b);
en caso que se quiera usar otro valor, debe reemplazarse (o comentarse) la linea 13.
*/
