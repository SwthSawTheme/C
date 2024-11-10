#include <stdio.h>
#include <stdlib.h>

// Exercício 2.1:
// Escreva um programa que peça para o usuário fornecer um número inteiro. O programa deve exibir
// se o número fornecido é par ou ímpar.

int main( void ){
    
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if (numero % 2 == 0){
        printf("O numero e par!");

    } else {
        printf("O numero e impar!");
    }

    return 0;
}