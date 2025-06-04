/******************************************************************************

65. Crie um algoritmo em que o aluno digita duas notas bimestrais e informa se o aluno foi aprovado ou não. 
Nota: Considere aprovado se a nota for maior que 5.0.

*******************************************************************************/
#include <stdio.h>

int main()
{

    float media, nota1, nota2;

    printf("Insira 1ª nota bimestral: "); scanf("%f", &nota1);
    printf("Insira 2ª nota bimestral: "); scanf("%f", &nota2);
    
    media = 1.0 * (nota1 + nota2) / 2.0;
    
    if(media>5)
        printf("Aprovado!");
    else
        printf("Reprovado!");

    return 0;
}
