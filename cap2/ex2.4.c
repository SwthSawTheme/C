#include <stdio.h>
#include <stdlib.h>

// Exercício 2.4:
// Escreva um programa que peça para o usuário fornecer três números inteiros. O programa deve
// exibir esses três números em ordem crescente.
// Arquivo com a solução: ex2.4.c

int main( void ){
    
    int temp;
    int numero1;
    int numero2;
    int numero3;

    printf("N1: ");
    scanf("%d",&numero1);

    printf("N2: ");
    scanf("%d",&numero2);

    printf("N3: ");
    scanf("%d",&numero3);
    
    if (numero1 > numero2) {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }
    if (numero1 > numero3) {
        temp = numero1;
        numero1 = numero3;
        numero3 = temp;
    }
    if (numero2 > numero3) {
        temp = numero2;
        numero2 = numero3;
        numero3 = temp;
    }

    printf("%d <= %d <= %d",numero1,numero2,numero3);

    return 0;
}