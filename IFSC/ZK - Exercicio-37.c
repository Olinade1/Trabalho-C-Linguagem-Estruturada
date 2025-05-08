/******************************************************************************

37. Escreva um algoritmo que determine o número de dias que uma pessoa já viveu. 
Considere que um mês tenha 30 dias.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int days, age, month, dias;
    
    printf("Informe sua idade: ");
    scanf("%d", &age);
    
    days = age * 12 * 30;
    
    printf("\nInforme quantos dias mais meses faltam para seu próximo aniversário: ");
    printf("\nMeses restantes: ");
    scanf("%d", &month);
    
    if (month < 0 || month > 11)
        printf("\nNúmero de meses inválido! Fim do programa
    
    else {
        printf("Dias restantes: ");
        scanf("%d", &dias);
        
        if (dias < 0 || dias > 29)
            printf("\nNúmero de dias inválido");
        
        else {
                    
            if (month != 0 || dias != 0)
                days = days + 360 - (month * 30 + dias) ;
            printf("\n\nVocê já viveu %d dias de vida!", days);
        }
    }
  
