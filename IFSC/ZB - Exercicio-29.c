
29. Admitindo que uma data é lida pelo algoritmo em uma variável inteira, e não em
uma variável do tipo data, crie um algoritmo que leia uma data no formato
DDMMAA e imprima essa data no formato AAMMDD, onde:
• A letra D corresponde a dois algarismos representando o dia;
• A letra M corresponde a dois algarismos representando o mês;
• A letra A corresponde aos dois últimos algarismos representando o ano.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int data, dia, mes, ano;
    
    printf("Informe a data no formato DDMMAA: ");
    scanf("%6d",&data);
    
    dia = data / 10000;
    mes = data % 10000 / 100;
    ano = data % 10000 % 100;
    
    printf("\nInverso da Data %d = %02d%02d%02d", data, ano, mes, dia);
    
    
    return 0;
}
