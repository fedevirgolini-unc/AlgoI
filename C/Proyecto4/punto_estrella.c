#include <stdio.h>

typedef struct _persona {
    char *nombre;
    int edad;
    float altura;
    float peso;
} persona_t;

float peso_promedio(persona_t arr[], unsigned int longitud)
 {
    float promedio;
    float sumatoria_pesos = 0;
    unsigned int i = 0;
    
    while (i < longitud) {
        sumatoria_pesos += arr[i].peso;
        i++;
    }
    
    promedio = sumatoria_pesos / longitud;
    
    return promedio;
 }

persona_t persona_de_mayor_edad(persona_t arr[], unsigned int longitud)
 {
    persona_t persona_mayor = arr[0];
    unsigned int i = 1;
    
    while (i < longitud) {
        if (arr[i].edad > persona_mayor.edad) {
            persona_mayor = arr[i];
        }
        i++;
    }
    
    return persona_mayor;
 }

persona_t persona_de_menor_altura(persona_t arr[], unsigned int longitud)
 {
    persona_t persona_enana = arr[0]; //con cariño :)
    unsigned int i = 1;
    
    while (i < longitud) {
        if (arr[i].altura < persona_enana.altura) {
            persona_enana = arr[i];
        }
        i++;
    }
    
    return persona_enana;
 }

int main(void)
 {
    persona_t p1 = {"Paola", 21, 1.85, 75};
    persona_t p2 = {"Luis", 54, 1.75, 69};
    persona_t p3 = {"Julio", 40, 1.70, 80};
    unsigned int longitud = 3;
    persona_t arr[] = {p1, p2, p3};
    
    printf("El peso promedio es: %f\n", peso_promedio(arr, longitud));
    
    persona_t p = persona_de_mayor_edad(arr, longitud);
    printf("el nombre de la persona con mayor edad es: %s\n", p.nombre);
    
    p = persona_de_menor_altura(arr, longitud);
    printf("El nombre de la persona con menor altura es: %s\n", p.nombre);
    
    return 0;
 }
