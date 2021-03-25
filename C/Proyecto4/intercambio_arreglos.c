#include <stdio.h>
#include <assert.h>

void intercambiar(int a[], int tam, int i, int j)
 {
    int aux = a[i];
    a[i] = a[j];
    a[j] = aux;
    
    return;
 }

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

int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
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
    int tam = 5;
    int unArreglo[tam], i, j;
    pedirArreglo(unArreglo, 5);
    i = ingresar_var_int('i');
    j = ingresar_var_int('j');
    
    assert(0 <= i || i < tam);
    assert(0 <= j || j < tam);
    
    intercambiar(unArreglo, tam, i, j);
    
    imprimeArreglo(unArreglo, tam);
 }
