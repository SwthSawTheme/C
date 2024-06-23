#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int p;
    int a;
    int l;

    printf("Valor do lado: ");
    scanf("%d",&l);

    p = l * 4;
    a = l * l;

    printf("Perimetro = %d\n",p);
    printf("Area = %d\n",a);

    return 0;
}