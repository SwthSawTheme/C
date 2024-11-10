#include <stdio.h>
#include <stdlib.h>

int main( void ){
    
    int primeiroNumero;
    int segundoNumero;

    printf("Entre com um numero: ");
    scanf("%d",&primeiroNumero);

    printf("Entre com outro numero: ");
    scanf("%d",&segundoNumero);

    if ( primeiroNumero <= segundoNumero){
        printf("Ordem crescente: %d <= %d",primeiroNumero,segundoNumero);
    } else if (segundoNumero <= primeiroNumero) {
        printf("Ordem crescente: %d <= %d",segundoNumero, primeiroNumero);
    }
    
    return 0;
}