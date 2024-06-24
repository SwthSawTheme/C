#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float p;
    float a;
    float l;

    printf("Valor do lado: ");
    scanf("%f",&l);

    p = l * 4;
    a = l * l;

    printf("Perimetro = %.2f\n",p);
    printf("Area = %.2f",a);

    return 0;
}