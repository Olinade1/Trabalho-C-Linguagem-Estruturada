/******************************************************************************

17. Faça um algoritmo que leia quatro números e apresente os resultados de adição
e multiplicação dos valores entre si, baseando-se na utilização da propriedade
distributiva, ou seja, se forem lidas as variáveis A, B, C e D, devem ser somadas
e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C
com D.  


*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a, b, c, d;
    int soma, mult;
    
    printf("Informe valor de A: ");
    scanf("%d",&a);
    
    printf("\nInforme valor de B: ");
    scanf("%d",&b);
    
    printf("\nInforme valor de C: ");
    scanf("%d",&c);
    
    printf("\nInforme valor de D: ");
    scanf("%d",&d);
    
    soma = a + b;
    mult = a * b;

    printf("\n\nA + B: %d",soma);
    printf("\nA * B: %d",mult);
    
    soma = a + c;
    mult = a * c;

    printf("\nA + C: %d",soma);
    printf("\nA * C: %d",mult);
    
    soma = a + d;
    mult = a * d;

    printf("\nA + D: %d",soma);
    printf("\nA * D: %d",mult);
    
    soma = b + c;
    mult = b * c;

    printf("\nB + C: %d",soma);
    printf("\nB * C: %d",mult);
    
    soma = b + d;
    mult = b * d;

    printf("\nB + D: %d",soma);
    printf("\nB * D: %d",mult);
    
    soma = c + d;
    mult = c * d;

    printf("\nC + D: %d",soma);
    printf("\nC * D: %d",mult);
    

    return 0;
    
}
