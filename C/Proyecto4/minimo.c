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
    int x, y, min;
    
    x = ingresar_var_int('x');
    y = ingresar_var_int('y');
    
    if (x > y){
        min = y;
    }
    else {
        min = x;
    }
    
    printf("El minimo es: %d\n", min);
 }
