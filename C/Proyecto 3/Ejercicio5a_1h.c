#include <stdio.h>
#include <assert.h>

int main (void)
 {
    int i;
    
    printf("Ingrese el valor 4 para i:\n");
    scanf("%d", &i);
    
    assert(i==4);
    
    while (i != 0){
        i = i-1;
    }

    printf("El valor de i es: %d\n", i);
 }
