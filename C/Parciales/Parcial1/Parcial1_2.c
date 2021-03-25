#include <stdio.h>

int main (void)
 {
    int x, y, dni1, dni2;
    x = 7;
    y = 4;
    dni1 = 6;
    dni2 = 0;
    
    if ((dni1 % 2 != 0) && (dni2 % 2 == 0)){
        x = x+dni1;
        y = y + x;
    }
    else {
        x = x + y;
    }
    
    printf("Valor de x=%d e y=%d (respectivamente)\n", x, y);
 }
