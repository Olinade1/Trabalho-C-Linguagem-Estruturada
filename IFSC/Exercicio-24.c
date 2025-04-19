/******************************************************************************

24. Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e
imprima a velocidade em m/s (metros por segundo).

*******************************************************************************/

#include <stdio.h>

int main()

{
    
    float quiloH, metrosS;
    
    printf("Informe velocidade média em Km/h : ");
    scanf("%f", &quiloH);
    
    metrosS = quiloH * 1000 / 3600 ;
    
    printf("%0.2f Km/h = %.2f m/s", quiloH, metrosS);
    
    
    return 0;
}
