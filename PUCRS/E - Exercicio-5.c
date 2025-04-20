/******************************************************************************

5. Construir um algoritmo que calcule 
a média aritmética de vários valores inteiros positivos, 
lidos externamente. 
O final da leitura acontecerá quando for lido um valor
negativo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int valor = 0, soma = 0;
    float media;
    
    int i = 0;
    
    while(valor >= 0){
    
        printf("Informe um número inteiro positivo: (Informe nº negativo para finalizar) ");
        scanf("%d",&valor);
        
        if (valor < 0)
            break;
            
        soma = soma + valor;
        i += 1;
    }
    
    media = soma / i;
    
    printf("\nSoma dos inteiros = %d ", soma);
    printf("\nQuantidade de números lidos = %d ", i);
    printf("\n\nMédia = %d / %d = %f", soma, i, media);
    
    return 0;
}
