#include <stdio.h>

int suma_hasta(int N)
 {
    int aux;
    aux = ((N * (N + 1)) / 2);
    
    return aux;
 }

int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }

int main (void)
 {
    int N, sum;
    
    N = ingresar_var_int('N');
    
    if (N < 0){
        printf("Ha ocurrido un error");
    }
    else {
        sum = suma_hasta(N);
        printf("La suma de los primeros %d números es: %d\n", N, sum);
    }
 }
