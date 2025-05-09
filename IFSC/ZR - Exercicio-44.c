/******************************************************************************

44. Uma sorveteria vende três tipos de picolés. Sabendo-se que o picolé do tipo 1 é
vendido por R$ 0.50, o do tipo 2 por R$ 0.60 e o do tipo 3 por R$ 0.75, faça um
algoritmo que, para cada tipo de picolé, mostre a quantidade vendida e o total
arrecadado.

*******************************************************************************/

#include <stdio.h>


int main()
{
    
	int picoleQnt[3];
	float picoleTotal[3];
	
	printf("Picolé tipo 1 = R$ 0.5/Unit ");
	printf("\nQuantidade vendida: " );
	scanf("%d", &picoleQnt[0]);
	
	printf("Picolé tipo 2 = R$ 0.6/Unit " );
	printf("\nQuantidade vendida: " );
	scanf("%d", &picoleQnt[1]);
	
	printf("Picolé tipo 3 = R$ 0.75/Unit " );
	printf("\nQuantidade vendida: " );
	scanf("%d", &picoleQnt[2]);
	

    picoleTotal[0] =  picoleQnt[0] * 0.5;
    picoleTotal[1] =  picoleQnt[1] * 0.6;
    picoleTotal[2] =  picoleQnt[2] * 0.75;
    
    float arrecadado = 0;
	for(int i = 0; i < 3; i++){
	    
	printf("\n\nPicole %d: ", i + 1);
	printf("\nQuantidade vendida: %d", picoleQnt[i]);
	printf("\nArrecadação Picole %d : %.2f", i + 1, picoleTotal[i]);
	
	arrecadado = arrecadado + picoleTotal[i];
	
	}

	printf("\n\nTotal arrecadado: %.2f", arrecadado);
	

return 0;
}
