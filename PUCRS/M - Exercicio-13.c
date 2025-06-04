/******************************************************************************

13. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir. 
Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.\

*******************************************************************************/
#include <stdio.h>

int main()
{

    int qnt;

    printf("Quantos valores a serem lidos: "); scanf("%d", &qnt);
    
    int valor[qnt], fatorial[qnt];
    for(int h = 0; h < qnt; h++)
        fatorial[h] = 1;
        
    printf("Informe: \n");
    
    for(int i = 0; i < qnt; i++){
        printf("\n%d º número: ", i + 1); scanf("%d",&valor[i]);
        int n = valor[i];
            for(int j = i; n > 0; n--)
                fatorial[j] = fatorial[j] * n;
    }
    
    for(int k = 0; k < qnt; k++)
        printf("\n%d º valor: %d \nFatorial: %d\n\n", k + 1, valor[k], fatorial[k]);

    return 0;
}
