/******************************************************************************

64. Um vendedor precisa de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade
comprada e calcular o preço total, usando a tabela abaixo. Mostre uma
mensagem no caso de código inválido.

Código Preço Unitário
'ABCD' R$ 5,30
'XYPK' R$ 6,00
'KLMP' R$ 3,20
'QRST' R$ 2,50

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    char codigo[4];
    char aux;
    int qnt;
    float valor = -1;
    
    printf("Informe o item desejado:\n\n'ABCD' R$ 5,30");
    printf("\n'XYPK' R$ 6,00\n'KLMP' R$ 3,20\n'QRST' R$ 2,50");
    
    printf("\n\nItem: "); scanf("%s[^\n]", codigo);
    printf("Quantidade: "); scanf("%d", &qnt);
    printf("Codigo digitado: %s",codigo);
    
    if(codigo[0]=='A' && codigo[1]=='B' && codigo[2]=='C' && codigo[3]=='D')
        valor = 5.3 * qnt;
    if(codigo[0]=='X' && codigo[1]=='Y' && codigo[2]=='P' && codigo[3]=='K')
        valor = 6.0 * qnt;
    if(codigo[0]=='K' && codigo[1]=='L' && codigo[2]=='M' && codigo[3]=='P')
        valor = 3.2 * qnt;
    if(codigo[0]=='Q' && codigo[1]=='R' && codigo[2]=='S' && codigo[3]=='T')
        valor = 2.5 * qnt;
        
    if(valor == -1)
        printf("\nCódigo inválido");
    else
        printf("\nValor total: %.2f",valor);
        
    return 0;
}
