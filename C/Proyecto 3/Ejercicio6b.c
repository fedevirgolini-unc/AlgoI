#include <stdio.h>
#include <assert.h>

//Realice un pequeño cambio a las funciones para que "personalicen" el ingreso y salida de datos para cada variable
int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }
 
void mostrarValorDe(char x, int y)
 {
    printf("El valor de %c es: %d\n", x, y);
 }

int main (void)
 {
    int x, y;
    
    x = ingresar_var_int('x');
    y = ingresar_var_int('y');
    
    if (x >= y){
        x=0;
    }
    else{
        x=2;
    }
    
    mostrarValorDe('x', x);
    mostrarValorDe('y', y);
 }
 
/*
Este proseso se podria realizar para todos los ejercicios, simplemente remplazando las lineas en las que se piden datos y las que se muestran
*/
