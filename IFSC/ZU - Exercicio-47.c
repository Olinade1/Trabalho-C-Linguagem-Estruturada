/******************************************************************************

47. Construir um algoritmo que tome como entradas três valores distintos e os
apresente (imprima) em ordem crescente (menor para o maior).

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
    
    if(v1 < v2 && v1 < v3) {                // ----- v1 ---- v2 ---- v3 ou ----v1 ----- v3 ---- v2
        printf("%d , ", v1);
        if (v2 < v3){
            printf("%d , ", v2);
            printf("%d", v3);
        }
        else if (v3 < v2) {
            printf("%d , ", v3);
            printf("%d", v2);
        }
    }                       
                      
    else if (v2 < v1 && v2 < v3) {          // ----- v2 ---- v1 ---- v3 ou ----v2 ----- v3 ---- v1
        printf("%d , ", v2);
        if (v1 < v3){
            printf("%d , ", v1);
            printf("%d", v3);
        }
        else if (v3 < v1){
            printf("%d , ", v3);
            printf("%d", v1);
        }
    }   
    
    else if (v3 < v1 && v3 < v2) {          // ----- v3 ---- v1 ---- v2 ou ----v3 ----- v2 ---- v1
        printf("%d , ", v3);
        if (v1 < v2){
            printf("%d , ", v1);
            printf("%d", v2);
        }
        else if (v2 < v1){
            printf("%d , ", v2);
            printf("%d", v1);
        }
    }       
return 0;
}
