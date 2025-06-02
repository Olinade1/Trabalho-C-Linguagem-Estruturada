/******************************************************************************

55. Calcule a média aritmética das três notas de um aluno e mostre, além do valor
da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a
7; a mensagem “em prova final” caso a média seja menor que 7 e maior ou igual
a 4; e "reprovado", caso contrário.

*******************************************************************************/


#include <stdio.h>

int main()
{

	int num1, num2, num3;
	float media;

	printf("Insira 3 notas do aluno: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
	media = (num1 + num2 + num3) / 3.0;

	printf ("\nMédia: %.2f\n", media);

    if (media >= 7)
        printf("Aprovado");
    else if (media < 7 && media >= 4)
        printf("Em prova final");
    else
        printf("Reprovado");
    
	return 0;
}
