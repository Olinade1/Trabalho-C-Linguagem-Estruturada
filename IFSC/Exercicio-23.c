/******************************************************************************

23. Faça um algoritmo que leia dois números nas variáveis NumA e NumB, nessa
ordem, e imprima em ordem inversa, isto é, se os dados lidos forem 5 e 9, por
exemplo, devem ser impressos na ordem 9 e 5.

*******************************************************************************/

#include <stdio.h>

int main()

{
    
    float numA, numB, aux;
    
    printf("Informe o valor de NumA : ");
    scanf("%f", &numA);
    
    printf("Informe o valor de NumB : ");
    scanf("%f", &numB);
    
    aux = numA;
    numA = numB;
    numB = aux;
    
    printf("Número B = %.2f", numA);
    printf("\nNúmero A = %.2f", numB);
    
    
    return 0;
}
