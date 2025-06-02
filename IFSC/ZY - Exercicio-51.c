/******************************************************************************

51. Faça um algoritmo que leia dois números e mostre qual o maior dos dois .

*******************************************************************************/


#include <stdio.h>

int main()
{
    
    int v1, v2;
    
    printf("Insira 2 valores diferentes: ");
    scanf("%d",&v1);
    scanf("%d",&v2);
    
    printf("\n\nValor maior: ");
    
    if(v1 > v2)             
        printf("%d ", v1);

    else if (v2 > v1 )    
        printf("%d ", v2);
    
    else
        printf("%d = %d", v1, v2);

return 0;
}
