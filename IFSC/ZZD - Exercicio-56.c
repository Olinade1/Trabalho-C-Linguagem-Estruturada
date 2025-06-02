/******************************************************************************

56. Elaborar um algoritmo que lê três valores a, b, c e os escreve. A seguir, encontre
o maior dos três valores e o escreva com a mensagem : "É o maior”.

*******************************************************************************/


#include <stdio.h>

int main()
{
    
    int a, b, c;
    
    printf("Insira 3 valores diferentes: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    printf("Valor de A: %d \nValor de B: %d\nValor de C: %d\n\n", a, b, c);
    
    
    if(a > b && a > c)         
        printf("É o maior: %d \n", a);

    if (b > a && b > c)
        printf("Valor maior: %d \n", b);

    if (c > a && c > b)
        printf("Valor maior: %d \n", c);
    
return 0;
}
