#include <stdio.h>

int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }

void mostrarValorDe(char x, int y)
 {
    printf("El valor de %c es: %d\n", x, y);
 }

int main (void)
 {
    int x, y;
    
    x = ingresar_var_int('x');
    y = ingresar_var_int('y');
    
    y = x + y;
    x = x + 1;
    
    mostrarValorDe('x', x);
    mostrarValorDe('y', y);
 }
