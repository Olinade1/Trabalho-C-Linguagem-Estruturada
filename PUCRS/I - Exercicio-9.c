/******************************************************************************
9. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. 
Mostre o resultado.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float menor = 99999999999;
    float maior = -99999999999;
    float num;
    for ( int i = 0; i < 50; i++){
        
    printf("Informe um número: ");
    scanf("%f", &num);
        
        if(num > maior)
            maior = num;
        
        if (num < menor)
            menor = num;
    }

    printf("\nNúmero maior: %.3f", maior);
    printf("\nNúmero menor: %.3f", menor);
    
    return 0;
}
