#include <stdio.h>

void pedirArreglo(int a[], int n_max)
 {
    int i = 0;
    
    while (i < n_max){
        printf("Ingrese un numero entero para a[%d]:\n", i);
        scanf("%d", &a[i]);
        i++;
    }
    
    return;
 }

int sumatoria(int a[], int tam)
 {
    int sum = 0;
    int i = 0;
    
    while (i < tam){
        sum += a[i];
        i++;
    }
    
    return sum;
 }

int main(void)
 {
    int unArreglo[5], resultado;
    
    pedirArreglo(unArreglo, 5);
    
    resultado = sumatoria(unArreglo, 5);
    
    printf("La sumatoria del arreglo es: %d\n", resultado);
 }
