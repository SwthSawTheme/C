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
    
    int a;
    int b;
    int h;

    printf("Valor da base: ");
    scanf("%d",&b);

    printf("Valor da altura: ");
    scanf("%d",&h);

    a = (b*h) / 2;

    printf("Area = %d",a);
    
    return 0;
}