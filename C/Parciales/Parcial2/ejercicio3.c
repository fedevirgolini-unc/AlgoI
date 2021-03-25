#include <stdio.h>

struct sum_t {
    int suma_pares;
    int suma_impares;
};

struct sum_t suma_parimpar(int array[], int tam)
 {
    int i = 0;
    struct sum_t resultado;
    resultado.suma_pares = 0;
    resultado.suma_impares = 0;
    
    while (i < tam) {
        if (array[i] % 2 == 0) {
            resultado.suma_pares += array[i];
        }
        else {
            resultado.suma_impares += array[i];
        }
        i++;
    }
    
    return resultado;
 }

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

int main(void)
 {
    int tamano = 5;
    int arreglo[tamano];
    struct sum_t solucion;
    
    printf("Ingrese los valores del arreglo a calcular: (tamaño = 5)\n");
    pedirArreglo(arreglo, tamano);
    
    solucion = suma_parimpar(arreglo, tamano);
    
    printf("Suma de numeros pares del arreglo: %d\n", solucion.suma_pares);
    printf("Suma de numeros impares del arreglo: %d\n", solucion.suma_impares);
 }
