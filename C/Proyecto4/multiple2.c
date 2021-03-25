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
    int x, y, z, aux;
    
    x = ingresar_var_int('x');
    y = ingresar_var_int('y');
    z = ingresar_var_int('z');
    
    aux = y;
    y = y + x + z;
    z = aux + x;
    x = aux;
    
    mostrarValorDe('x', x);
    mostrarValorDe('y', y);
    mostrarValorDe('z', z);
    
 }
