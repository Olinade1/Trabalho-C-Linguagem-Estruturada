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
    
    int i = 1, salAteCem = 0, son = 0; 
    // contador, salario até cem, nº de filhos
    float sal = 0, salAdicao = 0, salMaior = 0, sonAdicao; 
    // salario, somatorio, salario maior, somatorio de filhos
    
   while (sal>=0){
       
    printf("Informe salário: ");
    scanf("%f",&sal);
    
    if(sal<0)
        break;
        
    salAdicao = salAdicao + sal;
    
    if(sal>salMaior)
        salMaior = sal;
    
    if (sal<=100)
        salAteCem += 1;
        
    printf("Informe nº de filhos: ");
    scanf("%d",&son);
    
    sonAdicao += son; // sonAdicao = sonAdicao + son;
    
    printf("\n");
    
    i++; // i = i + 1
    
   }
   
   printf("\n=============================");
   
   printf("\n\nQnt de pessoas pesquisadas: %d", i-1);
   
   printf("\n\nSoma dos salários: %.2f", salAdicao);
   printf("\nMédia dos salários: %.2f", salAdicao/(i-1));
   printf("\nMaior salário: %.2f", salMaior);
   
   printf("\n\nQnt de pessoas com salário até 100 reais: %d", salAteCem);
   printf("\nPorcentagem daqueles que recebem menos de 100 reais: %.2f por cento", 100.0 * salAteCem/(i-1));
   
   printf("\n\nNº de filhos total: %.0f",sonAdicao);
   printf("\nMédia do Nº de filhos: %.2f",sonAdicao/(i-1));
   
   return 0;
   
}
