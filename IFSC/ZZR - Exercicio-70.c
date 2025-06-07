/******************************************************************************

70. Crie um algoritmo que retorne verdadeiro quando um número fornecido for par.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int n;
    
    printf("Escreva um número: "); scanf("%d", &n);
    
    if(n%2==0)
        printf("Valor lógico: %d", n%2==0);

    return 0;
}
