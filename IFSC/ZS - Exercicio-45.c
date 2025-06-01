/******************************************************************************

45. Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo,
o tipo de operação a ser realizada (depósito ou retirada) e o valor da operação.
Após, determine e mostre o novo saldo. Se o novo saldo ficar negativo, deve ser
mostrada, também, a mensagem “conta estourada”.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int nConta, opcao;
    float saldo = 0, operacao;
    
    printf("Informe número da conta: "); scanf("%d", &nConta);
    printf("Informe o saldo atual: "); scanf("%f", &saldo);
    printf ("Saldo Atual: %.2f", saldo);
    
    printf ("\nInforme o tipo de operação: ");
    printf ("\n 1 - Depósito");
    printf("\n2 - Retirada");

    printf("\n\nOpção: "); scanf("%d", &opcao);
    
   do {
    if (opcao == 1){
        printf("Valor do depósito: ");
        scanf("%f", &operacao);
        
        saldo = saldo + operacao;
    }
        
    else if (opcao == 2){
        printf ("Valor da retirada: ");
        scanf("%f", &operacao);
        
        saldo = saldo - operacao;
    }
    
    else
        printf("Opção inválida! Tente novamente.");
        
    } while (opcao != 1 && opcao != 2);
    
    printf("Seu saldo atual é: %.2f", saldo);
    if (saldo < 0)
        printf("\nConta estourada!!");
    

    return 0;
}
