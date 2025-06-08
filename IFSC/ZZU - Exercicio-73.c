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

#include <stdio.h>
#include <math.h>

int main()
{
    int num, aux;
    double math = 0;
    
    printf("Informe um número: "); scanf("%d",&num);
    printf("Informe opção desejada: \n101 - Raiz Quadrada\n102 - A metade\n103 - 10/100 do número\n104 - O dobro\n\nOpção: "); scanf("%d",&aux);
    
    switch (aux){
        
        case 101: math = sqrt(num);
        break;
        case 102: math = num/2;
        break;
        case 103: math = 10/100.0 * num;
        break;
        case 104: math = num*2;
        break;
        
        default: printf("Opção inválida");
        
    }
    
    printf("Resultado: %.3f",math);
    
    return 0;
}
