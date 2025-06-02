/******************************************************************************

11. Escreva um algoritmo que leia um número n (número de termos de uma progressão aritmética), 
a1 ( o primeiro termo da progressão) e r (a razão da progressão) e
escreva os n termos desta progressão, bem como a soma dos elementos.

*******************************************************************************/


#include <stdio.h>

int main()
{
    
    int n, a1, r;
    int paN[100], soma = 0;
    
    printf("Insira número de termos: "); scanf("%d", &n);
    printf("Insira primeiro termo da progressão: "); scanf("%d", &a1);
    printf("Insira a razão da progressão: "); scanf("%d", &r); printf ("\n");
    
    int i = 0, n_1 = n;
    while (i < n){
    
    paN[i] = a1 + (n - n_1) * r;
    soma = soma + paN[i];
    
    printf ("%d ª elemento da P.A. : %d\n", i + 1, paN[i]);
    
    n_1 -= 1;
    i += 1;
    }
    
    printf("\nSoma dos elementos: %d", soma);
return 0;
}
