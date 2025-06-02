/******************************************************************************

57. Elaborar um algoritmo que lê dois valores a e b e os escreve com a mensagem:
“São múltiplos” ou “Não são múltiplos”.

*******************************************************************************/


#include <stdio.h>

int main()
{
    
    int a, b;
    
    printf("Insira 2 valores: ");
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("Valor A: %d\nValor B: %d\n\n", a, b);
    
    if(a % b == 0 || b % a == 0)         
        printf("São múltiplos");
        
    if (a % b != 0 && b % a != 0)
        printf("Não são múltiplos");
    
return 0;
}
