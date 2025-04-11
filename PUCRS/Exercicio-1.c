// 1. Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação
#include <stdio.h>

int main() {
    
float a,b,c,d,e;
int resp = 0;

    printf("Digite 5 valores: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    
    if (a<0)
    resp += 1;
    
    if (b<0)
    resp += 1;
    
    if (c<0)
    resp += 1;
    
    if (d<0)
    resp += 1;
    
    if (e<0)
    resp += 1;
    
    printf("\nQuantidade de números negativos: %d", resp);

    return 0;
}
