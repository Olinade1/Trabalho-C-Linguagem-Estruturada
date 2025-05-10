/******************************************************************************
12. Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um deles, 
calcule a tabuada de 1 até n. Mostre a tabuada na forma:
1 x n = n
2 x n = 2n
3 x n = 3n
.......
n x n = n2

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    
    for ( int i = 1; i <= 20; i++){
        int numN;    
        printf("Informe um número: ");
        scanf("%d", &numN);
        
        for ( int j = 1; j <= numN; j++){
            printf("\n %d x %d = %d", j, numN, j * numN);
        }
    
    printf("\n=====================\n");
    }
    
    return 0;
}
