#include <stdio.h>
#include <stdlib.h>

// Exercício 2.2:
// Escreva um programa que peça para o usuário fornecer dois números inteiros. O programa deve
// exibir esses dois números em ordem crescente.


int main( void ){
    
    int primeiroNumero;
    int segundoNumero;

    printf("\nEntre com um numero: ");
    scanf("%d",&primeiroNumero);

    printf("\nEntre com outro numero: ");
    scanf("%d",&segundoNumero);

    if ( primeiroNumero <= segundoNumero){
        printf("\nOrdem crescente: %d <= %d",primeiroNumero,segundoNumero);
    } else if (segundoNumero <= primeiroNumero) {
        printf("\nOrdem crescente: %d <= %d",segundoNumero, primeiroNumero);
    }
    
    return 0;
}