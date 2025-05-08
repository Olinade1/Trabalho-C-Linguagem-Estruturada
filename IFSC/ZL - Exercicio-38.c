/******************************************************************************

38. Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem que
informe se a soma de A com B é menor, maior ou igual a C

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float a, b, c;
    
    printf("Informe o valor de: ");
    printf("\nA: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);
    
    printf("\nA + B = %f", a + b);
    
    if (a + b <= c)
        printf("\n\n%f eh menor ou igual a C = %f", a + b, c);
        

    return 0;
}
