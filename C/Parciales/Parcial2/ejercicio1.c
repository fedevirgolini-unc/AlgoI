#include <stdio.h>
#include <assert.h>

int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }

int main(void)
 {
    int x, X, y, Y, aux;
    
    X = ingresar_var_int('x');
    Y = ingresar_var_int('y');
    
    x = X;
    y = Y;
    
    assert(y > 0 && x == X && y == Y);
    
    aux = x;
    x = x % y;
    y = aux / y;
    
    assert(y * Y + x == X);
    
    printf("Para X=%d e Y=%d; resulta x=%d e y=%d\n", X, Y, x, y);
    
 }
