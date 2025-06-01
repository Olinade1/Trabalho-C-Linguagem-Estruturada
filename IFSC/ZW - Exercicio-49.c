/******************************************************************************

49. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos
lados de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele
ou escaleno. Se eles não formarem um triângulo, escrever uma mensagem.
Antes da elaboração do algoritmo, torna-se necessário a revisão de algumas
propriedades e definições.

Propriedade – o comprimento de cada lado de um triângulo é menor do que a
soma dos comprimentos dos outros dois lados.

Definição 1 - chama-se de triângulo equilátero o que tem os comprimentos dos
três lados iguais;
Definição 2 - chama-se de triângulo isóscele o triângulo que tem os
comprimentos de dois lados iguais;
Definição 3 - chama-se triângulo escaleno o triângulo que tem os
comprimentos dos três lados diferentes.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int vx [3];
    
    printf("Insira 3 valores de comprimento: ");
    scanf("%d",&vx[0]);
    scanf("%d",&vx[1]);
    scanf("%d",&vx[2]);
    
    printf("\n\n");
    
    
    if(vx[0] < (vx[1] + vx[2]) && vx [1] < (vx[2] + vx[0]) && vx[2] < (vx[0] + vx [1])){
        printf("É triangulo\n\n");
        
        if (vx[0] == vx [1] && vx[1] == vx [2] && vx[2] == vx [0])
            printf("Triângulo equilátero");
            
        else if(vx[0] != vx [1] && vx[1] != vx [2] && vx[2] != vx [0])
            printf("Triângulo escaleno");
            
        else 
            printf("Triângulo isósceles");
    }    
    else
        printf("Não é triângulo");
    
           
return 0;
}
