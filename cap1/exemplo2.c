#include <stdio.h>
 
int main(void) {
    
    float n = 3.14159;
    float raio;

    scanf("%f",&raio);

    float area = n * (raio * raio);

    printf("A=%.4f\n",area);
    
    return 0;
}