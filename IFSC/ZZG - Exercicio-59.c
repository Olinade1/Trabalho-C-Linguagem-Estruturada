/******************************************************************************

59. Faça um algoritmo que leia um número inteiro e mostre uma mensagem
indicando se este número é par ou ímpar e se é positivo ou negativo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int numero;
    
    printf("Informe um número inteiro: "); scanf("%d",&numero);
    
    
    if(numero%2==0)
        printf("%d é par e ", numero);
    else
        printf("%d é impar e ", numero);
        
    if(numero>=0)
        printf("positivo");
    else
        printf("negativo");


    return 0;
}
