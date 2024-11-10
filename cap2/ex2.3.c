// Exercício 2.3:
// Escreva um programa que peça para o usuário fornecer dois números inteiros. O programa deve
// exibir esses dois números em ordem decrescente.
// Arquivo com a solução: ex2.3.c

#include <stdio.h>
#include <stdlib.h>


int main( void ){
    
    int numero1;
    int numero2;

    printf("Entre com um numero: \n");
    scanf("%d",&numero1);

    printf("Entre com outro numero: \n");
    scanf("%d",&numero2);

    if (numero1 >= numero2) {
        printf("Ordem decrescente: %d >= %d\n",numero1,numero2);
    } else {
        printf("Ordem decrescente: %d >= %d\n",numero2,numero1);
    }

    return 0;
}