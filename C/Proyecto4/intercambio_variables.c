#include <stdio.h>

int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }

int main(void)
 {
    int x, y, z;
    
    x = ingresar_var_int('x');
    y = ingresar_var_int('y');
    
    z = x;
    x = y;
    y = z;
    
    printf("luega del combio de variable, resulta:\n");
    printf("x = %d; y = %d\n", x, y);
    
 }
