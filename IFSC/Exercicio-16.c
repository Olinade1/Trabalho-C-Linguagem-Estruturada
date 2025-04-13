/******************************************************************************

16. Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca
dos valores de forma que a variável A passe a possuir o valor da variável B e a
variável B passe a possuir o valor da variável A. Apresente os valores trocados 


*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a, b, aux;
    
    printf("Informe valor de A: ");
    scanf("%d",&a);
    
    printf("\nInforme valor de B: ");
    scanf("%d",&b);
    
    aux = a;
    a = b;
    b = aux;

    printf("\n\nValor de A: %d",a);
    printf("\nValor de B: %d",b);

    return 0;
    
}
