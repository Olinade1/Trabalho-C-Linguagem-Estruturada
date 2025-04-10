/* Suponha que uma escola utilize, como código de matrícula, um número inteiro
no formato AASDDD, onde:
• Os dois primeiros dígitos, representados pela letra A, são os dois últimos
algarismos do ano da matrícula;
• O terceiro dígito, representado pela letra S, vale 1 ou 2, conforme o aluno
tenha se matriculado no 1º ou 2º semestre;
• Os quatro últimos dígitos, representados pela letra D, correspondem à ordem
da matrícula do aluno, no semestre e no ano em questão.
Crie um algoritmo que leia o número de matrícula de um aluno e imprima o ano
e o semestre em que ele foi matriculado.

*/

#include <stdio.h>

int main() {

    int matr, ano, sem;

    printf("Digite sua matricula:");
    scanf("%d",&matr);
    
    ano = matr / 100000;
    
    
      printf("\nDois primeiros dígitos: %d", ano);
      printf("\nO ano de matricula 20%d", ano);
      
    sem = matr / 10000 % (ano * 10);
    
    printf("\n\nTerceiro dígito: %d", sem);
    printf("\nSemestre: %d", sem);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//    sem = matr / 10000 - (ano * 10);
    
  
//    
/*    if (sem == 1 || sem == 2)
    printf("%d semestre", sem);
    
    else 
    printf("\nmatricula inválida");
*/
    return 0;
}
