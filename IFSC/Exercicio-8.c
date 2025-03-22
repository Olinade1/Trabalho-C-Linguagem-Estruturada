#include <stdio.h>
#define PI 3.14159
// Declaracao da constante PI

// Calcular área da circunferência = Pi (3,14159 * Raio * raio)

int main () {
    
    float area, raio;
    
    //Declaração de variável "área" e "raio"
    
    printf("Informe o raio da circunferência em cm que deseja calcular sua área: ");
    scanf("%f", &raio);
    
    // Entrada de dados para variável "raio"
    
    area = raio * raio * PI;
    
    // Operacao da variavel "área" conforme sua fórmula
    
    printf("A área da circunferência para raio %.2f é: %f cm", raio, area);
    
    // Saída de dados da área da circunferência calculada, com duas casas decimais
    
    return 0;
    
}
