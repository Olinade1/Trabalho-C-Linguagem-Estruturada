/******************************************************************************

28. Dado um número de três algarismos N = CDU (onde C é o algarismo das
centenas, D é o algarismo das dezenas e U o algarismo das unidades),
considere o número M constituído pelos algarismos de N em ordem inversa, isto
é, M = UDC. Gerar M a partir de N (p.ex.: N = 123 -> M = 321).

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int valorN, c, d, u;
    
    printf("Informe um número de 3 algarismos: ");
    scanf("%3d",&valorN);
    
    c = valorN / 100;
    d = valorN % 100 / 10;
    u = valorN % 100 % 10;
    
    printf("\nInverso do número %d = %d%d%d", valorN, u, d, c);
    
    
    return 0;
}
