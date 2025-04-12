/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando ENQUANTO-FAÇA) 
*/

#include <stdio.h>

int main() {
    
    int i = 1; // contador
    float sal = 0, salAdicao = 0, salMaior;// salario, somatorio, valor maior
    
   while (sal>=0){
       
    printf("Informe salário: ");
    scanf("%f",&sal);
        
    salAdicao = salAdicao + sal; 
    
    i++;
    
   }
   
   printf("\nSoma dos salários: %f", salAdicao);
   printf("\nMédia dos salários: %f", salAdicao/(i-1));
    
    return 0;
}
