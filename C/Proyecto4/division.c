#include <stdio.h>
#include <assert.h>

int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }

struct div_t
 {
    int cociente;
    int resto;
 };

struct div_t division(int x, int y)
 {
    struct div_t res;
    
    res.cociente = x / y;
    res.resto = x % y;
    
    return res;
 }

int main(void)
 {
    int x, y;
    struct div_t resultado;
    
    x = ingresar_var_int('x');
    y = ingresar_var_int('y');
    
    assert(x >= 0 && y >= 0);
    
    if (y != 0){
        resultado = division(x, y);
        
        printf("El cociente de la division es %d y el resto es %d\n", resultado.cociente, resultado.resto);
    }
    else{
        printf("Error. El divisor no puede ser cero.\n");
    }
 }
