/******************************************************************************

35. Considere que o último concurso vestibular apresentou três provas: Português,
Matemática e Conhecimentos Gerais. Considerando que para cada candidato
tem-se um registro contendo o seu nome e as notas obtidas em cada uma das
provas, construa um algoritmo que forneça:

a) o nome e as notas em cada prova do candidato
b) a média do candidato
c) uma informação dizendo se o candidato foi aprovado ou não. Considere que
um candidato é aprovado se sua média for maior que 7.0 e se não apresentou
nenhuma nota abaixo de 5.0

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float notaPort, notaMat, notaCG, media;
    char nome [100];
    
    printf("Informe o nome do candidato: ");
    // scanf("%s[^\n]", nome);
    fgets(nome, 100, stdin);
    
    printf("\nImprima a nota de Português: ");
    scanf("%f",&notaPort);
    printf("Imprima a nota de Matemática: ");
    scanf("%f",&notaMat);
    printf("Imprima a nota de Conhecimentos Gerais: ");
    scanf("%f",&notaCG);
    
    printf("\n\nCandidato: %s", nome);
    
    media = (notaPort + notaMat + notaCG) / 3;
    printf("\nMédia : %.2f", media);
    
    int logica = notaPort > 5 && notaMat > 5 && notaCG > 5;
    printf ("\nTodas as notas são acima de 5: ");
    
    if (logica == 1)
        printf("Sim");
    else
        printf("Não");
    
    printf("\n\n");
    
    if ( media > 7.0 && ( notaPort > 5 && notaMat > 5 && notaCG > 5))
        printf ("Aprovado!");
        
    else
        printf ("Reprovado!");
    
    return 0;
}
