/******************************************************************************

52. Faça um algoritmo que leia dois números e indique se são iguais ou se são
diferentes. Mostre o maior e o menor (nesta sequência).

*******************************************************************************/


#include <stdio.h>

int main()
{
    
    int v1, v2;
    
    printf("Insira 2 valores diferentes: ");
    scanf("%d",&v1);
    scanf("%d",&v2);
    
    if(v1 != v2){
        printf("Valores diferentes\n\n");
    
        if(v1 > v2) {           
            printf("Valor maior: %d \n", v1);
            printf("Valor menor: %d ", v2);
        }
        if (v2 > v1 ){
            printf("Valor maior: %d \n", v2);
            printf("Valor menor: %d ", v1);
        }    
    }    
    else
        printf("Valores iguais");
    


return 0;
}
