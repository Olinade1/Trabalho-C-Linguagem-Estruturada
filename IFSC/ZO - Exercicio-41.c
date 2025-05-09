/******************************************************************************

41. A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro
vendido e mais 5% do valor das vendas. Faça um algoritmo que determine o
salário total de um vendedor.

*******************************************************************************/

#include <stdio.h>
#define SMINIMO 1518.0

int main()
{
    int car, comFixa;
    
    printf("Informe quantos carros foram vendidos no mês: ");
    scanf("%d", &car);
    
    comFixa = car * 50.0;
    
    float totalVendas = 0;
    float vendaCar;
    int i = 1;
    while ( i <= car ){
        
        printf("Informe o valor vendido do %d º carro: ", i);
        scanf("%f", &vendaCar);
        
        totalVendas = totalVendas + vendaCar;
        
        i += 1;
        
    }
    
    float salario;
    
    salario = SMINIMO * 2 + comFixa + totalVendas * 0.05;
    
    printf("\nSalario mínimo atual: %.2f", SMINIMO);
    printf("\nCarros vendidos: %d", car);
    printf("\nComissão fixa: %d * 50.0 = %d", car, comFixa);
    printf("\nTotal de vendas: %.2f", totalVendas);
    printf("\nComissão de 5 porcento sobre as vendas: %.2f * 5 porcento = %.2f", totalVendas, totalVendas * 0.05);
    
    printf("\n\nSalário: %.2f", salario);
    
    return 0;
}
