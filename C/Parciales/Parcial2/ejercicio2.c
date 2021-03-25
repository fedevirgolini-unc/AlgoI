#include <stdio.h>
#include <assert.h>

struct bits_t {
    int b0;
    int b1;
    int b2;
    int b3;
};


struct bits_t calcular_bits(int num) 
 {
    assert((num >= 0) && (num < 16));
    struct bits_t resultado;
    
    resultado.b0 = num % 2;
    resultado.b1 = (num / 2) % 2;
    resultado.b2 = (num / 4) % 2;
    resultado.b3 = (num / 8) % 2;
    
    return resultado;
 }

int main(void)
 {
    int num;
    struct bits_t solucion;
    
    printf("ingrese un numero entre 0 y 15 que desee transformaro a base binaria:\n");
    scanf("%d", &num);
    
    if (num <= 0 || num > 15) {
        printf("Error. No se ingreso un numero en el rango correcto\n");
    }
    else {
        solucion = calcular_bits(num);
        printf("el resultado es: %d%d%d%d\n", solucion.b3, solucion.b2, solucion.b1, solucion.b0);
    }
 }
