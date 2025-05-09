/******************************************************************************

43. Uma empresa irá dar um aumento de salário aos seus funcionários de acordo
com a categoria de cada empregado. O aumento seguirá a seguinte regra:

• Funcionários das categorias A, C, F, e H ganharão 10% de aumento sobre o
salário;
• Funcionários das categorias B, D, E, I, J e T ganharão 15% de aumento sobre
o salário;
• Funcionários das categorias K e R ganharão 25% de aumento sobre o salário;
• Funcionários das categorias L, M, N, O, P, Q e S ganharão 35% de aumento
sobre o salário;
• Funcionários das categorias U, V, X, Y, W e Z ganharão 50% de aumento
sobre o salário.

Faça um algoritmo que escreva nome, categoria e salário reajustado de cada
empregado.

*******************************************************************************/

#include <stdio.h>


int main()
{
    
	char cat;
	char nomeFuncionario [50];
	float salario, salarioR;
	
	printf("Informe o nome do funcionário: " );
	fgets (nomeFuncionario, 50, stdin);
	printf("\nInforme categoria: ");
	scanf("%c^\n", &cat);
	printf("\nInforme salário: ");
	scanf("%f", &salario);
	
	if ( cat == 'A' || cat == 'C' || cat == 'F' || cat == 'H')
	    salarioR = salario + salario * 0.1;
	if ( cat == 'B' || cat == 'D' || cat == 'E' || cat == 'I' || cat == 'J' || cat == 'T')
	    salarioR = salario + salario * 0.15;
	if ( cat == 'K' || cat == 'R')
	    salarioR = salario + salario * 0.25;    
    if ( cat == 'L' || cat == 'M' || cat == 'N' || cat == 'O' || cat == 'P' || cat == 'Q' || cat == 'S')
        salarioR = salario + salario * 0.35;  
    if ( cat == 'U' || cat == 'V' || cat == 'X' || cat == 'Y' || cat == 'W' || cat == 'Z')
        salarioR = salario + salario * 0.5; 
	
	printf("\n\nFuncionário: %s", nomeFuncionario );
	printf("\nCategoria: %c", cat);
	printf("\nSalário: %.2f", salario);
	printf("\nReajuste salarial: %.2f", salarioR);
	

	
		return 0;
}
