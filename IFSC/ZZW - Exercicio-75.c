/******************************************************************************

75. Faça um programa que receba o valor da venda, escolha a condição de
pagamento no menu e mostre o total da venda final conforme condições a seguir:

Venda a Vista - desconto de 10%
Venda a Prazo 30 dias - desconto de 5%
Venda a Prazo 60 dias - mesmo preço
Venda a Prazo 90 dias - acréscimo de 5%
Venda com cartão de débito - desconto de 8%
Venda com cartão de crédito - desconto de 7%

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    float venda, total;
    
    printf("Informe valor da venda: "); scanf("%f",&venda);
    printf("Informe opção desejada: \n1-Venda a Vista\n2-Venda a Prazo 30 dias\n3-Venda a Prazo 60 dias");
    printf("\n4-Venda a Prazo com 90 dias\n5-Venda com cartão de débito\n6-Venda com cartão de crédito"); 
    printf("\n\nOpção: "); scanf("%d",&num);
    
    switch (num){
        
        case 1: printf("\nVenda a Vista"); total = venda - venda * 0.1;
        break;
        case 2: printf("\nVenda a Prazo 30 dias"); total = venda - venda * 0.05;
        break;
        case 3: printf("\nVenda a Prazo 60 dias"); total = venda;
        break;
        case 4: printf("\nVenda a Prazo com 90 dias"); total = venda + venda * 0.05;
        break;
        case 5: printf("\nVenda com cartão de débito"); total = venda - venda * 0.08;
        break;
        case 6: printf("\nVenda com cartão de crédito"); total = venda - venda * 0.07;
        break;
        
        default: printf("\nOpção inválida");
        
    }
    
    printf("\nTotal venda final: %.2f",total);
    
    return 0;
}
