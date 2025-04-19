#include <stdio.h>

// Calcular área de um triângulo = base * altura / 2

int main () {
    
    float area, base, altura;
    
    //Declaração de variável "área" , "raio", "altura"
    
    printf("Informe o valor da base do triângulo: ");
    scanf("%f", &base);
    
    // Entrada de dados para variável "base"
    
    printf("Informe o valor da altura do triângulo: ");
    scanf("%f", &altura);
    
    // Entrada de dados para variável "altura"
    
    area = base * altura / 2;
    
    // Operacao da variavel "área" conforme sua fórmula
    
    printf("\nA área do triângulo para base %.2f e altura %.2f é: %.2f", base, altura, area);
    
    // Saída de dados da área do triângulo calculada, com duas casas decimais
    
    return 0;
    
}
