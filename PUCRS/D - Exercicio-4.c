/******************************************************************************

4. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float anos;
    
    printf("Função de crescimento: ");
    printf("\nChico ( x ) = 1.50 + 0.02 * x | x = ano");
    printf("\nZeh ( x ) = 1.10 + 0.03 * x | x = ano");
    
    printf("\n\n Quantos anos para que Chico(x) < Zeh(x) ?");
    printf("\n\n Chico(x) = Zeh(x) <=> 1.50 + 0.02 * x = 1.10 + 0.03 * x");
    
    anos = (1.50 - 1.10) / (0.03 - 0.02);
    
    printf("\n\nAnos cuja idade é igual: %.0f anos", anos);
    printf("\nAnos necessários para Zeh(x) > Chico(x) = %.0f anos", anos + 1.0);

    return 0;
}
