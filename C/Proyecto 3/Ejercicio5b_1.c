#include <stdio.h>
#include <assert.h>

int main (void)
 {
    int x, y, i;
    
    printf("Ingrese el valor 13 para x:\n");
    scanf("%d", &x);
    printf("Ingrese el valor 3 para y:\n");
    scanf("%d", &y);
    printf("Ingrese el valor 0 para i:\n");
    scanf("%d", &i);
    
    assert(x==13 && y==3 && i==0);
    i=0;
    
    while (x >= y){
        x = x-y;
        i = i+1;
    }
    
    printf("El estado final del programa es: x=%d y=%d i=%d\n", x, y, i);
 }
 
/*
Nº iteracion | estado
      1      | x=10 y=3 i=1
      2      | x=7 y=3 i=2
      3      | x=4 y=3 i=3
      4      | x=1 y=3 i=4
      
Este programa calcula la division de x dividido y, el cociente es i y el resto es x (del estado final en ambos casos)
*/
