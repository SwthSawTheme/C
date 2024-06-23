#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a;
    int b;

    scanf("%d",&a);
    scanf("%d",&b);

    int soma = a + b;
    int menos = a - b;
    int produto = a * b;
    int divisao = a / b;

    printf("%d + %d = %d\n",a,b,soma);
    printf("%d - %d = %d\n",a,b,menos);
    printf("%d * %d = %d\n",a,b,produto);
    printf("%d / %d = %d\n",a,b,divisao);

    return 0;
}