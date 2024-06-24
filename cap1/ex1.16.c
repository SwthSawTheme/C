#include <stdio.h>
#include <stdlib.h>

/*
A = bh/2
• Onde:
– A é a área do triângulo;
– b é o valor da base do triângulo;
– h é o valor da altura do triângulo
*/

int main(void) {
    
    float a;
    float b;
    float h;

    printf("Valor da base: ");
    scanf("%f",&b);

    printf("Valor da altura: ");
    scanf("%f",&h);

    a = (b*h) / 2;

    printf("Area = %.2f",a);
    
    return 0;
}