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
    
    int codigo, digitoV;
    
    printf("Informe o código (até 5 dígitos): ");
    scanf("%5d",&codigo); // %5d aceita apenas 5 dígitos
    
    digitoV = codigo % 7;
    
    printf("\nDígito verificador de %05d = %d", codigo, digitoV);
    // %05d alinha a impressão à direita, e preenche os espaços vazios à esquerda com '0'
    
    return 0;
}
