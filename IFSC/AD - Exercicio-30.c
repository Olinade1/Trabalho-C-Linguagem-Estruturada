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
    char matr[8];    
do{
    printf("Digite sua matricula: ");
    scanf("%s",matr);
    
    if(matr[2]== '1' || matr[2] == '2' ){
        printf("\n\nAno de matrícula: 20%c%c", matr[0],matr[1]);
        printf("\n%cº semestre",matr[2]);
    }
    else
        printf("Matrícula inválida\n");
  } while (matr[2]!= '1' && matr[2] != '2');
    
    return 0;
}
