/******************************************************************************

67. Crie o algoritmo Funcionario para calcular o aumento salarial de um empregado.
Por padrão, o aumento será de 15%. Entretanto, deve ser aplicada uma regra
diferente para cada faixa salarial. Regras:

a) se 1.500,00 <= salarioAtual < 1.750,00: aumento igual a 12%
b) se 1.750,00 <= salarioAtual < 2.000,00: aumento igual a 10%
c) se 2.000,00 <= salarioAtual < 3.000,00: aumento igual a 7%
d) se salarioAtual acima de 3.000,00: aumento igual a 5%.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float salario, aumento;
    
    printf("Escreva salário atual: "); scanf("%f", &salario);
    
    if(salario >= 1500.0 && salario < 1750.0)
        aumento = salario * 0.12;
    else if(salario >= 1750.0 && salario < 2000.0)
        aumento = salario * 0.10;
    else if(salario >= 2000.0 && salario < 3000.0)    
        aumento = salario * 0.07;
    else if(salario >= 3000.0)
        aumento = salario * 0.05;
    else
        aumento = salario * 0.15;
        
    printf("Aumento: %.2f\n", aumento);
    printf("Salário: %.2f", salario + aumento);

    return 0;
}
