/******************************************************************************

40. Uma empresa produz três tipos de peças mecânicas: parafusos, porcas e
arruelas. Têm-se os preços unitários de cada tipo de peça e sabe-se que sobre
estes preços incidem descontos de 10% para porcas, 20% para parafusos e 30%
para arruelas. Escreva um algoritmo que calcule o valor total da compra de um
cliente. Deve ser mostrado o nome do cliente. O número de cada tipo de peça
que o mesmo comprou, o total de desconto e o total a pagar pela compra.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    char nome[100] ;
    int porcaUnit, parafUnit, arruelaUnit;
    float porcaPreco, parafPreco, arruelaPreco, porcaValor, parafValor, arruelaValor, precoTotal;
    
    printf("Informe nome completo: ");
    fgets (nome, 100, stdin);
    
    printf("Informe o preço unitário da Porca: ");
    scanf("%f", &porcaPreco);
    printf("Informe o preço unitário do Parafuso: ");
    scanf("%f", &parafPreco);
    printf("Informe o preço unitário da Arruela: ");
    scanf("%f", &arruelaPreco);
    
    printf("\nInforme quantidade de Porcas: ");
    scanf("%d", &porcaUnit);
    printf("Informe quantidade de Parafusos: ");
    scanf("%d", &parafUnit);
    printf("Informe quantidade de Arruelas: ");
    scanf("%d", &arruelaUnit);
    
    porcaValor = porcaUnit * porcaPreco * 0.9;
    parafValor = parafUnit * parafPreco * 0.8;
    arruelaValor = arruelaUnit * arruelaPreco * 0.7;
    
    precoTotal = porcaValor + parafValor + arruelaValor;
    
    printf("\n\nCliente: %s", nome);
    printf("\n\nValores por unidade x quantidade = total: ");
    printf("\nPorca: %.2f reais x %d porcas = R$ %.2f", porcaPreco, porcaUnit, porcaPreco * porcaUnit);
    printf("\nParafuso: %.2f reais x %d parafusos = R$ %.2f", parafPreco, parafUnit, parafPreco * parafUnit);
    printf("\nArruela: %.2f reais x %d arruelas = R$ %.2f", arruelaPreco, arruelaUnit, arruelaPreco * arruelaUnit);
    
    printf("\n\nPorcas Desconto 10 porcento : %.2f", porcaUnit * porcaPreco * 0.1 );
    printf("\nParafusos Desconto 20 porcento : %.2f", parafUnit * parafPreco * 0.2);
    printf("\nArruelas Desconto 30 porcento : %.2f", arruelaUnit * arruelaPreco * 0.3);
    
    printf("\n\nTotal a Pagar: %.2f", precoTotal);

    return 0;
}
