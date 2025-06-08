/******************************************************************************
73. Faça um programa, utilizando estrutura de condição, que receba um número
real, digitado pelo usuário e mostre o menu para selecionar o tipo de cálculo que
deve ser realizado:

101-Raiz quadrada
102-A metade
103-10% do número
104-O dobro

Escolha a opção:

*******************************************************************************/

/******************************************************************************

83. Crie um algoritmo para uma calculadora utilizando a instrução escolha-caso para
determinar a operação que deve ser executada, conforme o usuário escolher no
menu de opções. Conforme a opção escolhida pelo usuário, uma operação
diferente da calculadora deve ser executada.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, aux;
    double math = 0;
    
    printf("Informe opção desejada: \n1 - Soma\n2 - Subtracao\n3 - Multiplicação\n4 - Divisão\n\nOpção: "); scanf("%d",&aux);
    
    if(aux<1 || aux>4)
       printf("Opção inválida");
    else{
        printf("Informe operando 1: "); scanf("%d",&a);
        printf("Informe operando 2: "); scanf("%d",&b);
        
        switch (aux){
            
            case 1: printf("%d + %d = %d", a,b,a+b);
            break;
            case 2: printf("%d - %d = %d", a,b,a-b);
            break;
            case 3: printf("%d * %d = %d", a,b,a*b);
            break;
            case 4: printf("%d / %d = %.3f", a,b,1.0 * a/b);
            break;
            
        }
    }
    
    return 0;
}