#include <stdio.h>

int pedirEntero(void)
 {
    int aux;
    printf("Ingrese un numero entero:\n");
    scanf("%d", &aux);
    
    return aux;
 }

void imprimeEntero(int x)
 {
    printf("El valor del entero es: %d\n", x);
 }


int main (void)
 {
    int x;
    
    x = pedirEntero();
    
    imprimeEntero(x);
 }
