#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float D;
    float C;
    float A;
    float r;
    float pi = 3.141592;

    printf("Valor do raio do circulo: ");
    scanf("%f",&r);

    D = 2 * r;
    C = 2 * pi * r;
    A = pi * (r * r);

    printf("Diametro = %.2f\n",D);
    printf("Circunferencia = %.2f\n",C);
    printf("Area = %.2f",A);

    return 0;
}