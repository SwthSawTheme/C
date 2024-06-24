#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int nota1;
    int nota2;
    int media;

    printf("Primeiro numero: ");
    scanf("%d",&nota1);

    printf("Segundo numero: ");
    scanf("%d",&nota2);

    media = (nota1 + nota2) / 2;

    printf("Media aritmetica: %d",media);

    return 0;
}