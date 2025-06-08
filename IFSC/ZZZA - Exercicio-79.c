/******************************************************************************

79. Faça um algoritmo que leia a primeira letra do estado civil de uma pessoa e
mostre uma mensagem com a sua descrição (Solteiro, Casado, Viúvo,
Divorciado, Desquitado). Mostre uma mensagem de erro, se necessário.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char civil[7], aux;
    
    printf("Informe estado civil: "); fgets(civil,7,stdin);

    aux = civil[0];
    
    switch (civil[0]){
        
        case 's': printf("Solteira");
        break;
        case 'S': printf("Solteira");
        break;
        case 'c': printf("Casada");
        break;
        case 'C': printf("Casada");
        break;
        case 'v': printf("Viúva");
        break;
        case 'V': printf("Viúva");
        break;
        case 'd':
        if(civil[1]=='i')
            printf("Divorciado");
        if(civil[1]=='e')
            printf("Desquitado");
        break;
       case 'D':
        if(civil[1]=='i')
            printf("Divorciado");
        if(civil[1]=='e')
            printf("Desquitado");
        break;
        
        default: printf("Estado civil não identificado");
  
    }

    return 0;
}
