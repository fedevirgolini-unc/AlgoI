#include <stdio.h>
#include <stdbool.h>

bool existe_positivo(int a[], int tam)
 {
    int i = 0;
    bool p = false;
    
    while (i < tam && !p){
        if (a[i] > 0){
            p = true;
        }
        
        i++;
    }
    
    return p;
 }

bool todos_positivos(int a[], int tam)
 {
    int i = 0;
    bool tp = true; //tp := "todos positivos"
    
    while (i < tam && tp){
        if (a[i] <= 0){
            tp = false;
        }
        
        i++;
    }
    
    return tp;
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

int main(void)
 {
    int unArreglo[5], accion;
    
    pedirArreglo(unArreglo, 5);
    accion = 0;
    
    printf("Ingrese 1 para existe_positivo o 2 para todos_positivos\n");
    scanf("%d", &accion);
        
    if (accion == 1){
        printf("Existe positivo: %d\n", existe_positivo(unArreglo, 5));
    }
    else {
        printf("Todos positivos: %d\n", todos_positivos(unArreglo, 5));
    }
    
 }
