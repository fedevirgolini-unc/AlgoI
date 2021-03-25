#include <stdio.h>
#include <assert.h>

//Utilizamos esta funciòn ya implementada para ingresar el valor de una variable
int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }

void holaHasta(int n)
 {
    while (0 < n){
        printf("Hola\n");
        n = n - 1;
    }
 }


int main (void)
 {
    int n;
    n = ingresar_var_int('n');
    
    assert(0 < n);
    
    holaHasta(n);
 }
