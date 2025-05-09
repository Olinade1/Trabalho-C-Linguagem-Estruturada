/******************************************************************************

42. Uma pessoa comprou quatro artigos em uma loja. Para cada artigo tem-se
nome preC'o e percentual de desconto. FaC'a um algoritmo que mprima nome,
preC'o e preC'o com desconto de cada artigo e o total a pagar.

*******************************************************************************/

#include <stdio.h>


int main()
{
	char nome1[50];
	char nome2[50];
	char nome3[50];
	char nome4[50];
	
	float valor [4];
	int desconto [4];
	float precoFinal [4];
	float total = 0.0;
	
	printf("Informe o nome do 1 º artigo: " );
	fgets (nome1, 50, stdin);
	
	printf("Informe o nome do 2 º artigo: " );
	fgets (nome2, 50, stdin);
	
	printf("Informe o nome do 3 º artigo: " );
	fgets (nome3, 50, stdin);
	
	printf("Informe o nome do 4 º artigo: " );
	fgets (nome4, 50, stdin);
	
	
	for ( int i = 0; i < 4; i++){
	    
	    printf("\nInforme o valor do %d º artigo: ", i + 1);
    	scanf("%f", &valor[i]);
    	printf("Informe o desconto: ");
    	scanf("%d", &desconto[i]);
    	
    	precoFinal[i] = valor[i] * ( ( 100.0 - desconto[i] ) / 100.0 );
    	
    	total = total + precoFinal[i];
	    
	}
	
	printf("1º Artigo: ");
	printf("\nNome: %s", nome1);
	printf("\nValor: %.2f", valor[0]);
	printf("\nDesconto: %d", desconto[0]);
	printf("\nPreço final: %.2f", precoFinal[0]);
	
	printf("\n\n2º Artigo: ");
	printf("\nNome: %s", nome2);
	printf("\nValor: %.2f", valor[1]);
	printf("\nDesconto: %d", desconto[1]);
	printf("\nPreço final: %.2f", precoFinal[1]);
	
	printf("\n\n3º Artigo: ");
	printf("\nNome: %s", nome3);
	printf("\nValor: %.2f", valor[2]);
	printf("\nDesconto: %d", desconto[2]);
	printf("\nPreço final: %.2f", precoFinal[2]);
	
	printf("\n\n4º Artigo: ");
	printf("\nNome: %s", nome4);
	printf("\nValor: %.2f", valor[3]);
	printf("\nDesconto: %d", desconto[3]);
	printf("\nPreço final: %.2f", precoFinal[3]);
	
	printf("\n\nValor total a pagar: %.2f", total);
	
		return 0;
}
