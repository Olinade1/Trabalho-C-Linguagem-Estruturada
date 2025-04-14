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
    
    float a, b, c, d;
    float soma, mult;
    
    printf("Informe valor de A: ");
    scanf("%f",&a);
    
    printf("\nInforme valor de B: ");
    scanf("%f",&b);
    
    printf("\nInforme valor de C: ");
    scanf("%f",&c);
    
    printf("\nInforme valor de D: ");
    scanf("%f",&d);
    
    soma = a + b;
    mult = a * b;

    printf("\n\nA + B: %.2f",soma);
    printf("\nA * B: %.2f",mult);
    
    soma = a + c;
    mult = a * c;

    printf("\nA + C: %.2f",soma);
    printf("\nA * C: %.2f",mult);
    
    soma = a + d;
    mult = a * d;

    printf("\nA + D: %.2f",soma);
    printf("\nA * D: %.2f",mult);
    
    soma = b + c;
    mult = b * c;

    printf("\nB + C: %.2f",soma);
    printf("\nB * C: %.2f",mult);
    
    soma = b + d;
    mult = b * d;

    printf("\nB + D: %.2f",soma);
    printf("\nB * D: %.2f",mult);
    
    soma = c + d;
    mult = c * d;

    printf("\nC + D: %.2f",soma);
    printf("\nC * D: %.2f",mult);
    

    return 0;
    
}
