/******************************************************************************

54. Faça um algoritmo que leia quatro números (Opção , Num1 , Num2 e Num3) e
mostre o valor de Num1 se Opção for igual a 2; o valor de Num2 se Opção for
igual a 3; e o valor de Num3 se Opção for igual a 4. Os únicos valores possíveis
para a variável Opção são 2, 3 e 4.

*******************************************************************************/


#include <stdio.h>

int main()
{

	int opcao, num1, num2, num3;

	printf("Insira 3 números: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);

    do{
	printf("\nDigite opção 2, 3, ou 4: "); scanf("%d", &opcao);
	
	printf ("\n");

	switch (opcao){
	    
	    case 2: printf("%d", num1);
	    break;
	    case 3: printf("%d", num2);
	    break;
	    case 4: printf("%d", num3);
	    break;
	    
	    default: printf("Opção inválida");
	}
    }while (opcao < 2 || opcao  > 4);
    
	return 0;
}
