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
    int x, abs;
    
    x = ingresar_var_int('x');
    
    if (x < 0){
        abs = -x;
    }
    else {
        abs = x;
    }
    
    printf("El valor absoluto de %d es: %d\n", x, abs);
 }
