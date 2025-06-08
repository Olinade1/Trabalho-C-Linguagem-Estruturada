/******************************************************************************

90. Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    for(int i = 0; i < 1000; i+=7)
        printf("%d\n",i);
        
    return 0;
}