/******************************************************************************

58. Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a
média ponderada do aluno, considerando que o peso para a maior nota seja 4 e
para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média
calculada e uma mensagem: "APROVADO" se a média for maior ou igual a 5 e
"REPROVADO" se a média for menor que 5.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int nota[3], codigo;
    float mediaP;
    
    printf("Informe código do aluno: "); scanf("%d",&codigo);
    printf("Informe as 3 notas: \n"); 
    
    for(int i = 0; i < 3; i++){
        printf("%d ª nota: ", i + 1); scanf("%d",&nota[i]);
    }
    
    if(nota[0] > nota[1] && nota[0] > nota[2])
        mediaP = (nota[0] * 4 + nota[1] * 3 + nota[2] * 3)/10.0;
    if(nota[1] > nota[0] && nota[1] > nota[2])
        mediaP = (nota[1] * 4 + nota[0] * 3 + nota[2] * 3)/10.0;
    if(nota[2] > nota[0] && nota[2] > nota[1])
        mediaP = (nota[2] * 4 + nota[0] * 3 + nota[1] * 3)/10.0;
        
    printf("\n\nCódigo do aluno: %d \n", codigo);
    printf("Média: %.2f\n\n", mediaP);
    
    for(int i = 0; i < 3; i++){
        printf("%d ª nota: %d\n", i + 1, nota[i]);
    }
    
    if(mediaP >= 5)
        printf("\nAprovado!");
    else
        printf("\nReprovado!");

    return 0;
}
