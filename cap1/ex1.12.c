#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float a;

    printf("Entre com um valor qualquer: ");
    scanf("%f",&a);

    printf("%f\n",a);
    printf("%.2f\n",a);
    printf("%.3f\n",a);

    return 0;
}