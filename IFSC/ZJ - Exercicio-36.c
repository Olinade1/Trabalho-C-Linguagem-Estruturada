/******************************************************************************

36. Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda
de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor
vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$
50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro
caso, a comissão será de 7%. Escreva um algoritmo que gere um relatório
contendo nome, valor da venda e comissão de cada um dos corretores. O
relatório deve mostrar também o total de vendas da empresa.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float venda, comissao;
    char nome [100];
    
    printf("Informe o nome do vendedor: ");
    // scanf("%s[^\n]", nome);
    fgets(nome, 100, stdin);
    
    printf("\nInforme o valor da venda em R$: ");
    scanf("%f",&venda);
    
    if (venda > 50000.0)
        comissao = venda * 0.12;
    else if (venda >= 30000.0 && venda <= 50000.0)
        comissao = venda * 0.095;
    else
        comissao = venda * 0.07;
        
    printf("\n\nVendedor: %s", nome);
    printf("\nVenda: %.2f R$", venda);
    printf ("\nComissão: %.2f R$", comissao);
    
    return 0;
}
