#include <stdio.h>

struct comp_t
 {
   int menores;
   int iguales;
   int  mayores;
 };

struct comp_t cuantos(int a[], int tam, int elem)
 {
    struct comp_t res;
    int i = 0;
    res.menores = 0;
    res.iguales = 0;
    res.mayores = 0;
    
    while (i < tam){
        if (a[i] < elem){
            res.menores++;
        }
        else if (a[i] > elem){
            res.mayores++;
        }
        else {
            res.iguales++;
        }
        
        i++;
    }
    
    return res;
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
    int tam = 5;
    int unArreglo[tam], entero;
    struct comp_t solucion;
    pedirArreglo(unArreglo, 5);
    printf("Ingrese un entero:\n");
    scanf("%d", &entero);
    
    solucion = cuantos(unArreglo, tam, entero);
    
    printf("Numeros menores a %d: %d\n", entero, solucion.menores);
    printf("Numeros iguales a %d: %d\n", entero, solucion.iguales);
    printf("Numeros mayores a %d: %d\n", entero, solucion.mayores);
 }
