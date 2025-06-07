/******************************************************************************

71. Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e
apresente o nome da mais pesada e o nome da mais alta.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    char nome1[30], nome2[30], aux;
    float altura[2], peso[2];
    
    printf("1ª pessoa\nNome: "); fgets(nome1,sizeof(nome1),stdin);
    printf("\nAltura: "); scanf("%f",&altura[0]);
    printf("\nPeso: "); scanf("%f",&peso[0]);
    
    scanf("%c",&aux);
    
    printf("\n\n2ª pessoa\nNome: "); fgets(nome2,sizeof(nome2),stdin);
    printf("\nAltura: "); scanf("%f",&altura[1]);
    printf("\nPeso: "); scanf("%f",&peso[1]);
    
    if(altura[0]>altura[1])
        printf("Mais alta: %s\n", nome1);
    if(altura[1]>altura[0])
        printf("Mais alta: %s\n", nome2);
    if(peso[0]>peso[1])
        printf("Mais pesada: %s", nome1);
    if(peso[1]>peso[0])
        printf("Mais pesada: %s", nome2);
        
    return 0;
}
