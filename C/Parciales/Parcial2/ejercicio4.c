#include <stdio.h>

struct asoc_t {
    int clave;
    int valor;
};

int cuenta_asoc(int key, struct asoc_t a[], int tam) {
    int i = 0;
    int numCuentas = 0;
    
    while (i < tam) {
        if (a[i].clave == key) {
            numCuentas++;
        }
        i++;
    }
    
    return numCuentas;
}


void pedirArreglo(struct asoc_t a[], int n_max) {
    int i = 0;
    
    while (i < n_max) {
        printf("Ingrese un numero para clave de a[%d]:\n", i);
        scanf("%d", &a[i].clave);
        printf("Ingrese un numero para valor de a[%d]:\n", i);
        scanf("%d", &a[i].valor);
        i++;
    }
    return;
}

int main(void)
 {
    int tam = 3;
    struct asoc_t a[tam];
    int entero;
    
    pedirArreglo(a, tam);
    
    printf("ingrese un entero para utilizar en cuenta_asoc:\n");
    scanf("%d", &entero);
    
    printf("Cantidad de asociaciones que tiene la clave ingresada: %d\n", cuenta_asoc(entero, a, tam));
 }
