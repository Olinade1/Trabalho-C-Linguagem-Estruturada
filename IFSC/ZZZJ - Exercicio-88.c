/******************************************************************************

88. Some os números de 1 a 100 e imprima o valor.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int soma = 0;
    
    for(int i = 1; i < 101; i++)
        soma = soma + i;
        
    printf("Soma dos números de 1 a 100: %d",soma);
    
    return 0;
}