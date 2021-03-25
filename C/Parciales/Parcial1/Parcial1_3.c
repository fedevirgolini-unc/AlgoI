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
    int x, y, i, res;
    
    x= pedirEntero();
    y=0;
    i=0;
    res=0;
    
    i=1;
    y=0;
    
    while (i != x + 1){
        i = i + 1;
        y = y + i;
        if (i % 2 == 0){
            y = y-1;
        }
    
    printf("iteracion %d\n", i-1);
    printf("%d, %d, %d, %d\n", x, y, i, res);
    
    }
    
    res = y * 2 + x % 2;
    
    imprimeEntero(res);
 }
