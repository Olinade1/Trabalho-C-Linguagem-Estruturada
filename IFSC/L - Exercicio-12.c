#include <stdio.h>

int main()
{
    
    float celsius, fahr;
    
    // celsius = temperatura em graus Celsius;
    // fahr = temperatura em graus Fahrenheit;
    
    printf("Informe temperatura em Celsius, para converão em Fahrenheit: ");
    scanf("%f", &celsius);
    
    fahr = ((9 * celsius) + 160) / 5;
    
    // Fórmula de conversão Celsius para Fahrenheit = (9 * C + 160 ) / 5
    
    printf("\nTemperatura %.2f Celsius é %.2f em Fahrenheit", celsius, fahr);
    
    // Saída de dados de graus Celsius para Fahrenheit
        
return 0;

}
