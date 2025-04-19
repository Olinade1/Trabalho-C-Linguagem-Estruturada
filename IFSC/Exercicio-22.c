/******************************************************************************

22. Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua
média na variável Media e imprima seu valor.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
// Funções da biblioteca math.h retornam valor do tipo DOUBLE

int main()

{
    
    float Val1, Val2, media;
    
    printf("Informe dois valores inteiros : ");
    scanf("%f", &Val1);
    scanf("%f", &Val2);
    
    media = (Val1 + Val2) / 2;
    
    printf("Resultado de (%.0f + %.0f) / 2 = %.2f", Val1, Val2, media);
    
    
    return 0;
}
