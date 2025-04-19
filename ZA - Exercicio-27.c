/******************************************************************************

27. Leia um código de cinco algarismos (variável Codigo) e gere o digito verificador
(DigitoV) módulo 7 para o mesmo.
Supondo que os cinco algarismos do código são ABCDE, uma forma de calcular
o dígito desejado, com módulo 7 é:
DigitoV = resto da divisão de S por 7, onde
S = 6*A + 5*B + 4*C + 3*D + 2*E

*******************************************************************************/

#include <stdio.h>

int main()

{
    
    int codigo, verificador;
    
    printf("Digite o código até 5 algarismos: ");
    scanf("%5d",&codigo);
    
    printf ("\nCódigo digitado: %05d", codigo);
    printf ("\nDígito verificador: %d", codigo % 7);

    
    return 0;
}
