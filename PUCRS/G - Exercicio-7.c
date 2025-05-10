/******************************************************************************
7. Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. 
O algoritmo deverá ler, além das notas, o código do aluno e deverá ser
encerrado quando o código for igual a zero.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char cod[30] = "1";
    
    while(cod != "0"){
        printf("Informe o código de aluno: ");
        fgets (cod, sizeof(cod), stdin);
    //    scanf("%s^[\n]", cod);
        
        if (cod[0] == '0')
            break;
            
        float nota[3];
        float total = 0;
        float media;
        int i = 0;
        while (i < 3) {
            printf("\nInforme a %d ª nota : ", i + 1);
            scanf("%f", &nota[i]);
            total = total + nota[i];
            
            i += 1;
        }
       
        media = total / i;
        
        printf("\nMédia aritmática das 3 notas: %.1f\n\n", media);
        scanf("%c", cod);
    }

    return 0;
}
