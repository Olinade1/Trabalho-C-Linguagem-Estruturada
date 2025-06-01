/******************************************************************************

48. Faça um algoritmo que leia 3 números inteiros distintos e escreva o menor deles.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int v1, v2, v3;
    
    printf("Imprima 3 valores: ");
    scanf("%d",&v1);
    scanf("%d",&v2);
    scanf("%d",&v3);
    
    printf("\n\n");
    
    if(v1 < v2 && v1 < v3)                // ----- v1 ---- v2 ---- v3 ou ----v1 ----- v3 ---- v2
        printf("Menor número: %d", v1);
                      
    if (v2 < v1 && v2 < v3)          // ----- v2 ---- v1 ---- v3 ou ----v2 ----- v3 ---- v1
        printf("Menor número: %d", v2);
    
    if (v3 < v1 && v3 < v2)           // ----- v3 ---- v1 ---- v2 ou ----v3 ----- v2 ---- v1
        printf("Menor número: %d", v3);
           
return 0;
}
