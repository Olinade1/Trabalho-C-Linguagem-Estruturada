/******************************************************************************

66. Escreva um algoritmo que leia dois números inteiros e determine qual é o menor
e qual é o maior também.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a, b;
    
    printf("Escreva dois números: "); scanf("%d", &a); scanf("%d", &b);
    
    if(a>b)
        printf("Menor: %d\nMaior: %d",b, a);
    else if(a<b)
        printf("Menor: %d\nMaior: %d",a, b);
    else    
        printf("%d = %d", a, b);

    return 0;
}
