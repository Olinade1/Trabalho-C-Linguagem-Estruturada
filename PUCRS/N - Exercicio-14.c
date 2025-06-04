/******************************************************************************

14. Escrever um algoritmo que leia um número não determinado de valores e calcule,
a média aritmética dos valores lidos, 
a quantidade de valores positivos, 
a quantidade de valores negativos,
e o percentual de valores negativos e positivos. 
Mostre os resultados.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int qnt, positivoN = 0, negativoN = 0, soma = 0;
    float media, percentualP, percentualN;

    printf("Quantos valores a serem lidos: "); scanf("%d", &qnt);
    
    int valor[qnt], fatorial[qnt];
    for(int h = 0; h < qnt; h++){
        printf("%d º valor: ", h + 1); scanf("%d",&valor[h]);
        soma = soma + valor[h];
        
        if(valor[h]>=0)
            positivoN = positivoN + 1;
        else
            negativoN = negativoN + 1;
    }   
    
    media = 1.0 * soma / qnt;
    percentualP = 1.0 * positivoN/qnt * 100.0;
    percentualN = 1.0 * negativoN/qnt * 100.0;
    
//    printf("\nQnt = %d\n", qnt);
    printf("Média: %.3f\n", media);
    printf("Nº de val. positivos: %d\n", positivoN);
    printf("Nº de val. negativos: %d\n", negativoN);
    printf("Percentual Negativos: %.2f\n", percentualN);
    printf("Percentual Positivos: %.2f\n", percentualP);
    
    
    return 0;
}
