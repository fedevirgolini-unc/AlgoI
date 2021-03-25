#include <stdio.h>

struct datos_t
 {
    float maximo;
    float minimo;
    float promedio;
 };

int sumatoria(float a[], int tam)
 {
    float sum = 0;
    int i = 0;
    
    while (i < tam){
        sum += a[i];
        i++;
    }
    
    return sum;
 }

struct datos_t stats(float a[], int tam)
 {
    int i = 1;
    struct datos_t res;
    
    if (tam > 0){
        res.minimo = a[0];
        res.maximo = a[0];
        res.promedio = sumatoria(a, tam) / tam;
    }
    
    while (i < tam){
        if(a[i] < res.minimo){
            res.minimo = a[i];
        }
        else if (a[i] > res.maximo){
            res.maximo = a[i];
        }
        
        i++;
    }
    
    return res;
 }

void pedirArreglo(float a[], int n_max)
 {
    int i = 0;
    
    while (i < n_max){
        printf("Ingrese un numero entero para a[%d]:\n", i);
        scanf("%f", &a[i]);
        i++;
    }
    
    return;
 }

int main(void)
 {
    int tam = 5;
    float unArreglo[tam];
    struct datos_t solucion;
    pedirArreglo(unArreglo, 5);
    
    solucion = stats(unArreglo, tam);
    
    printf("Maximo: %f\n", solucion.maximo);
    printf("Minimo: %f\n", solucion.minimo);
    printf("Promedio: %f\n", solucion.promedio);
 }
