#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int n)
 {
    int i = 2;
    bool primo;
    
    if (n == 0 || n == 1){
        primo = false;
    }
    else {
        primo = true;
    }
    
    while (i < n){
        if ((n % i) == 0 && primo){
            primo = false;
        }
        i++;
    }
    
    return primo;
 }

int nesimo_primo(int N)
 {
    int primos_encontrados = 0;
    int ultimoPrimo;
    int i = 0;
    
    while (primos_encontrados < N){
        if (esPrimo(i)){
            ultimoPrimo = i;
            primos_encontrados++;
        }
        i++;
    }
    
    return ultimoPrimo;
 }

int ingresar_var_int(char x)
 {
    int aux;
    printf("Ingrese un numero para %c:\n", x);
    scanf("%d", &aux);
    
    return aux;
 }

int main(void)
 {
    int n;
    
    n = ingresar_var_int('n');
    
    while (n < 0) {                 //Aqui esta implementado el punto b del ejercecio. En caso del punto a se utiliza un if.
        printf("Número negativo, intente nuevamente.\n");
        n = ingresar_var_int('n');
    }
    
    printf("El n-ésimo primo es: %d\n", nesimo_primo(n));
 }
