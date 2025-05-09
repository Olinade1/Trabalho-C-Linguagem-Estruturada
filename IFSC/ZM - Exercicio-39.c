/******************************************************************************

39. Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
Considerando que alguém está pagando uma compra, escreva um algoritmo que
mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre
também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota
do troco. Suponha que o sistema monetário não utilize moedas. 

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int buy, money, troco, faltante, nota100, nota10, nota1, notasTotal;
    
    printf("Informe o valor do produto: ");
    scanf("%d", &buy);
    
    printf("Informe valor para pagamento: ");
    scanf("%d", &money);
    
    while (money < buy){
        
        printf("\nFalta pagar: %d", buy - money);
        printf ("\nPagamento restante: ");
        scanf("%d", &faltante);
        
        money = money + faltante;
    }
    
    
    troco = money - buy;
    
    nota100 = troco / 100;
    nota10 = (troco % 100) / 10;
    nota1 =  (troco % 100) % 10;
    
    notasTotal = nota100 + nota10 + nota1;
    
    printf("\nValor do produto: %d", buy);
    printf("\nPagamento: %d", money);
    printf("\nTroco: %d", troco);
    printf("\n\nNº de notas totais: %d", notasTotal);
    printf("\nNotas de 100: %d", nota100);
    printf("\nNotas de 10: %d", nota10);
    printf("\nNotas de 1: %d", nota1);
        

    return 0;
}
