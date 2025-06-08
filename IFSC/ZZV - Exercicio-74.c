/******************************************************************************
74. O programa de uma loja de móveis mostra o seguinte menu na tela de vendas:
1-Venda a Vista
2-Venda a Prazo 30 dias
3-Venda a Prazo 60 dias
4-Venda a Prazo com 90 dias
5-Venda com cartão de débito
6-Venda com cartão de crédito
Escolha a opção:

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Informe opção desejada: \n1-Venda a Vista\n2-Venda a Prazo 30 dias\n3-Venda a Prazo 60 dias");
    printf("\n4-Venda a Prazo com 90 dias\n5-Venda com cartão de débito\n6-Venda com cartão de crédito"); 
    printf("\n\nOpção: "); scanf("%d",&num);
    
    switch (num){
        
        case 1: printf("\nVenda a Vista");
        break;
        case 2: printf("\nVenda a Prazo 30 dias");
        break;
        case 3: printf("\nVenda a Prazo 60 dias");
        break;
        case 4: printf("\nVenda a Prazo com 90 dias");
        break;
        case 5: printf("\nVenda com cartão de débito");
        break;
        case 6: printf("\nVenda com cartão de crédito");
        break;
        
        default: printf("\nOpção inválida");
        
    }
    
    return 0;
}
