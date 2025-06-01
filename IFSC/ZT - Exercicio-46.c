/******************************************************************************

46. Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de
serviços é de:
• R$ 5.50 por diária, se o número de diárias for maior que 15;
• R$ 6.00 por diária, se o número de diárias for igual a 15;
• R$ 8.00 por diária, se o número de diárias for menor que 15.
Construa um algoritmo que mostre o nome e o total da conta de um cliente.

*******************************************************************************/

#include <stdio.h>
#define DIARIA 60.0

int main()
{
    
    char nome [30];
    int nDiaria;
    float conta = 0;
    
    printf("Informe nome do cliente: "); fgets (nome, 30, stdin); 
    printf ("Informe número de diárias do cliente: "); ;scanf ("%d", &nDiaria);
    
    
 //  do {
    if (nDiaria > 15)
        conta = conta + DIARIA + nDiaria * 5.50;
    else if (nDiaria < 15)
        conta = conta + DIARIA + nDiaria * 8.00;
    else
        conta = conta + DIARIA + nDiaria * 6.0;
        
 //   } while (opcao != 1 && opcao != 2);
    
    printf("Conta total do cliente: %.2f", conta);

    return 0;
}
