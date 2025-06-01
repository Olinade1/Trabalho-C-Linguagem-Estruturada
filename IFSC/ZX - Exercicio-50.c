/******************************************************************************

50. Suponha que o conceito de um aluno seja determinado em função da sua nota.
Suponha, também, que esta nota seja um valor inteiro na faixa de 0 a 100,
conforme a seguinte faixa:

Nota Conceito
0 a 49 Insuficiente
50 a 64 Regular
65 a 84 Bom
85 a 100 Ótimo

Crie um algoritmo que apresente o conceito e a nota do aluno.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int nota;
    
    printf("Insira nota do aluno: ");
    scanf("%d",&nota);
    
    printf("\nNota: %d\n", nota);
    
    
    if(nota >= 0 && nota <= 49)
        printf("Insuficiente");
    if(nota >= 50 && nota <= 64)
        printf("Regular");
    if(nota >= 65 && nota <= 84)
        printf("Bom");
    if(nota >= 85 && nota <= 100)
        printf("Ótimo");
    
return 0;
}
