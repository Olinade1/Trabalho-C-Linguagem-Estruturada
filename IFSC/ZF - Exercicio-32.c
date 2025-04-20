/******************************************************************************

32. Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme
a condição:
• “F1”, se N <= 10
• “F2”, se N > 10 e N <= 100
• “F3”, se n > 100

*******************************************************************************/

#include <stdio.h>

int main()
{

    float n;
    
    printf("Informe um número: ");
    scanf("%f",&n); 
    
    if(n <= 10)
        printf("F1");
    if(n > 10 && n <= 100)
        printf("F2");
    if(n > 100)
        printf("F3");
    
    return 0;
}
