/******************************************************************************

63. Um vendedor necessita de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade
comprada e calcular o preço total, usando a tabela abaixo:

Código do produto Preço unitário

1001 5,32
1324 6,45
6548 2,37
0987 5,32
7623 6,45

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int codigo, qnt;
    float valor;
    
    printf("Informe o item desejado:\n\n1001 5,32;");
    printf("\n1324 6,45;\n6548 2,37;\n0987 5,32;");
    printf("\n7623 6,45\n\n");
    
    printf("Item: "); scanf("%d",&codigo);
    printf("Quantidade: "); scanf("%d", &qnt);
    
    
    switch (codigo){
        
        case 1001 : valor = 5.32 * qnt;
        break;
        
        case 1324 : valor = 6.45 * qnt;
        break;
        
        case 6548 : valor = 2.37 * qnt;
        break;
        
        case 987 : valor = 5.32 * qnt;
        break;
        
        case 7623 : valor = 6.45 * qnt;
        break;
        
    }

    printf("\nValor total: %.2f",valor);

    return 0;
}
