/******************************************************************************
72. Um determinado clube de futebol pretende classificar seus atletas em categorias
e para isto ele contratou um programador para criar um programa que
executasse esta tarefa. Para isso o clube criou uma tabela que continha a faixa
etária do atleta e sua categoria. A tabela está demonstrada abaixo:

IDADE CATEGORIA
De 05 a 10 Infantil
De 11 a 15 Juvenil
De 16 a 20 Junior
De 21 a 25 Profissional

Construa um programa que solicite o nome e a idade de um atleta e imprima a
sua categoria.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char nome[30];
    int idade, aux;
    
    printf("Nome do atleta: "); fgets(nome,30,stdin);
    printf("Idade: "); scanf("%d",&idade);
    
    if(idade>=5 && idade<=10)
        aux = 1;
    if(idade>=11 && idade<=15)
        aux = 2;
    if(idade>=16 && idade<=20)
        aux = 3;
    if(idade>=21 && idade<=25)
        aux = 4;
        
    printf("\nCategoria");
        
    switch (aux){
        
        case 1: printf(" Infantil");
        break;
        case 2: printf(" Juvenil");
        break;
        case 3: printf(" Junior");
        break;
        case 4: printf(" Profissional");
        break;
        default: printf(" N/A");
    }
    return 0;
}