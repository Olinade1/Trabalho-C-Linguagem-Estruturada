/******************************************************************************

Faça um algoritmo que leia uma temperatura em Fahrenheit e a apresente
convertida em graus Celsius. A fórmula de conversão é C = (F – 32) * ( 5 / 9), na
qual F é a temperatura em Fahrenheit e C é a temperatura em Celcius

*******************************************************************************/

#include <stdio.h>

int main()
{
    
  float fahr, celsius;
    
    printf("Informe o valor da temperatura em Fahrenheit: ");
    scanf("%f", &fahr);
    
    celsius = (fahr - 32) * 5 / 9;
    
    printf("\n%.2f Fahrenheit = %.2f Celsius", fahr,celsius);

    return 0;
}
