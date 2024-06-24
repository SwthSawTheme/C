#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float a;
    float b;
    float soma;
    float subtracao;
    float multiplicacao;
    float divisao;

    printf("Primeiro numero: ");
    scanf("%f",&a);

    printf("Segundo numero: ");
    scanf("%f",&b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    printf("%.2f + %.2f = %.2f\n",a,b,soma);
    printf("%.2f - %.2f = %.2f\n",a,b,subtracao);
    printf("%.2f * %.2f = %.2f\n",a,b,multiplicacao);
    printf("%.2f / %.2f = %.2f",a,b,divisao);

    return 0;
}