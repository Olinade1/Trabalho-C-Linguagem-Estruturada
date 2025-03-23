#include <stdio.h>

// Adicao de dois números inteiros: A + B

int main () {
    
    int numero_1, numero_2, soma;
    
    //Declaração de variável "numero_1" , "numero_2"
    
    printf("Informe o valor do número inteiro A: ");
    scanf("%d", &numero_1);
    
    // Entrada de dados para variável "numero_1"
    
    printf("Informe o valor do número inteiro B: ");
    scanf("%d", &numero_2);
    
    // Entrada de dados para variável "numero_2"
    
    soma = numero_1 + numero_2;
    
    // Operacao da variavel "soma" conforme sua fórmula
    
    printf("\nA soma do número A = %d e B = %d é: %d + %d = %d", numero_1, numero_2, numero_1, numero_2, soma);
    
    // Saída de dados da soma dos dois números inteiros
    
    return 0;
    
}
