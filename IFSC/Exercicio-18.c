/******************************************************************************

18. Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e
ALTURA e apresente o valor do volume de uma caixa retangular. Utilize para o
cálculo a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA. 


*******************************************************************************/

#include <stdio.h>


int main()
{
    
    float comp, alt, larg, vol;
    
    printf("Informe o comprimento em cm: ");
    scanf("%f",&comp);
    
    printf("\nInforme a altura em cm: ");
    scanf("%f",&alt);
    
    printf("\nInforme a largura em cm: ");
    scanf("%f",&larg);
    
    vol = comp * alt * larg;
    
    printf ("\n\n O volume da caixa retangular = %.2f cm³", vol);

    return 0;
    
}
