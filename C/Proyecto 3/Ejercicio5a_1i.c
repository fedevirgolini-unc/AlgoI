#include <stdio.h>
#include <assert.h>

int main (void)
 {
    int i;
    
    printf("Ingrese el valor 400 para i:\n");
    scanf("%d", &i);
    
    assert(i==400);
    
    while (i != 0){
        i = 0;
    }
    
    printf("El valor de i es: %d\n", i);
 }
