/******************************************************************************

89. Construa um Algoritmo que, para um grupo de 50 valores inteiros, determine:

a) A soma dos números positivos;
b) A quantidade de valores negativos;

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a[50], somaP = 0, qntN = 0;
    
    for(int i = 0; i < 50; i++){
        printf("Valor %d : %d\n",i + 1, a[i]);
        if(a[i]>=0)
            somaP = somaP + a[i];
        if(a[i]<0)
            qntN = qntN + 1;
    }   
    
    printf("\nSoma dos positivos: %d\n",somaP);
    printf("\nQuantidade dos negativos: %d\n",qntN);
    
    return 0;
}