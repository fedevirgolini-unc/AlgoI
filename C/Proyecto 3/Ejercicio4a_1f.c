#include <stdio.h>
#include <assert.h>

int main (void)
 {
    int x, y;
    
    printf("Ingrese el valor -100 para x:\n");
    scanf("%d", &x);
    printf("Ingrese el valor 1 para y:\n");
    scanf("%d", &y);
    
    assert(x==-100 && y==1);
    
    if (x >= y){
        x=0;
    }
    else{
        x=2;
    }
    
    printf("El valor de x e y es: %d, %d (respectivamente)\n", x, y);
 }
