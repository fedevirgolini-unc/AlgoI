#include <stdio.h>

int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }
 
void imprimeEntero(int x)
 {
    printf("El valor del entero es: %d\n", x);
 }
 

int main (void)
 {
    int x, y, i, res;
    
    x = ingresar_var_int('x');
    y = ingresar_var_int('y');
    i = ingresar_var_int('i');
    res = ingresar_var_int('r');
    
    i=1;
    
    y = y + i;
        if (i % 2 == 0){
            y = y-1;
        }
    y = y + i;
        if (i % 2 == 0){
            y = y-1;
        }
    y = y + i;
        if (i % 2 == 0){
            y = y-1;
        }
    y = y + i;
        if (i % 2 == 0){
            y = y-1;
        }
    y = y + i;
        if (i % 2 == 0){
            y = y-1;
        }
    res = y * 2 + x % 2;
    
    imprimeEntero(res);
    
 }
