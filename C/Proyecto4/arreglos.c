#include <stdio.h>

int pedirEntero(int x)
 {
    int aux;
    printf("Ingrese un numero entero para a[%d]:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }

void pedirArreglo(int a[], int n_max)
 {
    int i = 0;
    
    while (i < n_max){
        a[i] = pedirEntero(i);
        i++;
    }
    
    return;
 }

void imprimeArreglo(int a[], int n_max)
 {
    int i = 1;
    
    printf("[");
    if (n_max > 0){
        printf("%d", a[0]);
    }
    while (i < n_max){
        printf(", %d", a[i]);
        i++;
    }
    printf("]\n");
    
    return;
 }

int main(void)
 {
    int unArreglo[5];
    
    pedirArreglo(unArreglo, 5);
    
    imprimeArreglo(unArreglo, 5);
 }
