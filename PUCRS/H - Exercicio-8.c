/******************************************************************************
8. Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. 
Termine a leitura se o usuário digitar zero (0).

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num = 1;
    int i = 0, soma = 0;
    float media;
    while(num != 0){
        printf("Informe um número par: ");
        scanf("%d", &num);
        
        if(num == 0)
            break;
        
        if (num%2 == 0){
            soma = soma + num;
            i += 1;
            media = soma / i;
        }
        
    }
    
    printf("\nMédia dos números pares digitados: %.3f", media);
    
    return 0;
}
