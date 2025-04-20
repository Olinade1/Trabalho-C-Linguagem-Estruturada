/******************************************************************************

33. O sistema de avaliação de determinada disciplina, é composto por três provas. A
primeira prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Faça
um algoritmo para calcular a média final de um aluno desta disciplina.

*******************************************************************************/

// Média Aritmética Ponderada: (2x + 3x + 5x) / (2 + 3 + 5)

#include <stdio.h>

int main()
{

    float av1, av2, av3, mediaP;
    
    printf("Informe a nota das seguintes provas: ");
    
    printf("\n\n1ª Prova: ");
    scanf("%f",&av1); 
    
    printf("2ª Prova: ");
    scanf("%f",&av2); 
    
    printf("3ª Prova: ");
    scanf("%f",&av3); 
    
    printf("\nAv1 = %f | Av2 = %f | Av3 = %f", av1, av2, av3);
    
    mediaP = (av1 * 2 + av2 * 3 + av3 * 5) / 10;
    
    printf("\n\nMédia do aluno: %.1f", mediaP);
    
    return 0;
}
