#include <stdio.h>
#include <assert.h>

int main (void)
 {
    int x, y, z, m;
    
    printf("Ingrese el valor 5 para x:\n");
    scanf("%d", &x);
    printf("Ingrese el valor 4 para y:\n");
    scanf("%d", &y);
    printf("Ingrese el valor 8 para z:\n");
    scanf("%d", &z);
    printf("Ingrese el valor 0 para m:\n");
    scanf("%d", &m);
    
    assert(x==5 && y==4 && z==8 && m==0);
    
    if (x < y){
        m=x;
    }
    else{
        m=y;
    }
    
    if (m >= z){
        m=z;
    }
    
    printf("El menor entre %d, %d y %d es: %d\n", x, y, z, m);
 }
 
/*
Este programa guarda en la variable m el menor de tres numeros (x, y, z)
*/
