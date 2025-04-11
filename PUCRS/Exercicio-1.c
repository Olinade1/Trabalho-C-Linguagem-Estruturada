// 1. Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação
#include <stdio.h>

int main() {
    
float a;
int resp = 0; 
int i = 0;

printf("Digite 5 valores: ");

while (i<5){
    
    scanf("%f",&a);
    
    if (a<0)
        resp+=1;
        
    i+=1;
    
            }
    
printf("\nQuantidade de números negativos: %d", resp);

    return 0;
}
    
    printf("\nQuantidade de números negativos: %d", resp);

    return 0;
}
