#include <stdio.h>
#include <math.h>
// Funções da biblioteca math.h retornam valor do tipo DOUBLE

int main()
{
    
    int valor;
    double square, cubo;
    
    printf("Informe um valor inteiro: ");
    scanf("%d", &valor);
    
    cubo = pow(valor, 3);
    square = pow(valor, 2);
    
    printf("\n %d³ = %.0f", valor, cubo);
    printf("\n %d² = %.0f", valor, square);

    return 0;
}
