#include <stdio.h>
#include <stdbool.h>

int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }

int main (void)
 {
    int x, y, temp;
    bool z;
    
    x = ingresar_var_int('x');
    y = ingresar_var_int('y');
    temp = ingresar_var_int('z');
    z = temp;
    
    printf("x = 0 + 6 ∨ y = 0 + 6 ∨ z tiene como resultado: %d\n", ((x == 0 + 6) || (y == 0 + 6) || z));
    printf("(0 + 6 + x) mod 3 tiene como resultado: %d\n", ((0 + 6 + x) % 3));
    printf("x * 0 + y * 6 tiene como resultado: %d\n", (x * 0 + y * 6));
    printf("x ≠ 0 ∧ 0 ≤ (0 - 6) / x ∧ ¬z tiene como resultado: %d\n", (x != 0 && 0 <= (0 - 6) / x && !z));
    
 }
