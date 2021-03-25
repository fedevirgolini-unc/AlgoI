#include <stdio.h>
#include <stdbool.h>

int main(void)
 {
    int x, y, z, temp;
    bool b, w;
    bool a, d, c; //Variables auxiliares para verificar su valor al hacer el debug
    
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
    printf("Ingrese un valor para b\n");
    scanf("%d", &temp);
    b = temp;
    printf("Ingrese un valor para w\n");
    scanf("%d", &temp);
    w = temp;
    
    //Haciendo un debug verificamos los valores de las variables
    a = x % 4 == 0;
    d = x + y == 0 && y - x == (-1) * z;
    c = !(b && w);
    
    
 }
 
/*
 Como respuesta al ejercicio:
 para que las expreciones tengan el valor indicado, un posible estado inicial sería:
 x-> 8; y -> -8; z-> 16; b-> 1; w -> 1
*/
