/******************************************************************************

62. Um banco concederá um crédito especial aos seus clientes, variável com o saldo
médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e
calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem
informando o saldo médio e o valor do crédito.

Saldo médio Percentual
de 0 a 200 nenhum crédito
de 201 a 400 20% do valor do saldo médio
de 401 a 600 30% do valor do saldo médio
acima de 601 40% do valor do saldo médio

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int saldo;
    float credito = 0;
    
    printf("Informe saldo: "); scanf("%d", &saldo);

    if(saldo>=201 && saldo<=400)
        credito = saldo * 20/100.0;
    if(saldo>=401 && saldo<=600)
        credito = saldo * 30/100.0;
    if(saldo>=601)
        credito = saldo * 40/100.0;
        
    printf("saldo: %.d\n", saldo);
    printf("crédito: %.2f", credito);
    
    return 0;
}
