/******************************************************************************

31. Faça um algoritmo que leia dois números A e B e imprima o maior deles.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float a, b;
    
    printf("Informe dois números: ");
    scanf("%f",&a); scanf("%f",&b);
    
    if(a > b)
        printf("%f > %f", a, b); 
    if(a < b)
        printf("%f > %f", b, a);    
    if (a == b)
        printf("%f = %f", a, b);

    return 0;
}
