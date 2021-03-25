#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int main (void)
 {
    int x, i, temp;
    bool res;
    
    printf("Ingrese el valor 5 para x:\n");
    scanf("%d", &x);
    printf("Ingrese el valor 0 para i:\n");
    scanf("%d", &i);
    printf("Ingrese el valor 0 para res:\n");
    scanf("%d", &temp);
    res = temp;
    
    assert(x==5 && i ==0 && res==false);
    
    i=2;
    res=true;
    while (i < x && res){
        res = res && ((x%i) != 0);
        i = i+1;
    }
    
    printf("El estado final del programa es: x=%d i=%d res=%d\n", x, i, res);
    
 }
 
/*
Nº iteracion | estado
      1      | x=5 i=1 res=1
      2      | x=5 i=2 res=1
      3      | x=5 i=3 res=1
      4      | x=5 i=4 res=1
      5      | x=5 i=5 res=1
      
Este programa calcula el menor numero por el cual x es divisible y le suma 1
*/
