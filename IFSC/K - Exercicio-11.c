#include <stdio.h>

int main()
{
    
    float ht, vh, pd, sb, td, sl;
    
    // ht = horas trabalhadas;
    // vh = valor hora trabalhada;
    // pd = percentual de desconto;
    // sb = salário bruto;
    // td = total de desconto;
    // sl = salario liquido

    printf("Informe a horas trabalhadas: ");
    scanf("%f", &ht);
    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &vh);
    printf("Informe o percentual de desconto: ");
    scanf("%f", &pd);
    
    // Entrada de dados das variáveis ht, vh e pd
    
    sb = ht * vh;
    td = (pd/100) * sb;
    sl = sb - td;
    
    // Cálculo do salário bruto = hora trabalhada vezes valor da hora;
    // Cálculo do total de desconto = percentual de desconto sobre 100, multiplicado pelo salário bruto;
    // Cálculo do salário líquido = salário bruto menos o total de desconto.
    
    printf("\n\nHoras Trabalhadas: %0.2f", ht);
    printf("\nSalário Bruto: %0.2f", sb);
    printf("\nDesconto: %0.2f", td);
    printf("\nSalário Líquido: %0.2f", sl);
    
    // Saída de dados das horas trabalhadas, salário bruto, total de desconto e salário líquido
        
return 0;

}
