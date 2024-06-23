#include <stdio.h>
#include <stdlib.h>

/*
– P é o perímetro do retângulo;
– A é a área do retângulo;
– l é o valor da largura do retângulo;
– h é o valor da altura do retângulo.
*/

int main(void) {
    
    int p;
    int a;
    int l;
    int h;

    printf("Valor da largura: ");
    scanf("%d",&l);

    printf("Valor da altura: ");
    scanf("%d",&h);

    p = (2*l) + (2*h);
    a = l*h;

    printf("Perimetro = %d\n",p);
    printf("Area = %d",a);
    
    return 0;
}