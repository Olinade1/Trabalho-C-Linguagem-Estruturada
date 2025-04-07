#include <stdio.h>
#include <string.h>

int main() {
    

    char nome[10] = "0";
    char snome[10] = "0";
    
    printf("escreva seu nome: ");
    scanf("%s", nome);
    
    printf("\nescreva seu sobrenome: ");
    scanf("%s", snome);
    
    printf("\nSeu nome completo é: \n\n%s %s", nome, snome);

    return 0;

/* 
    char nome[10];
    char snome[10];
    
    printf("escreva seu nome: ");
    scanf("%s", nome);
    
    printf("\nescreva seu sobrenome: ");
    scanf("%s", snome);
    
    strcat(nome, snome);
    
    printf("\nSeu nome completo é: \n\n%s", nome);
    
 
    return 0;
 */      
    
}
