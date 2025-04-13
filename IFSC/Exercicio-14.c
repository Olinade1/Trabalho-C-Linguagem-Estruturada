/******************************************************************************

14. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de
óleo, utilizando a fórmula VOLUME = 3,14159 * RAIO2
 * ALTURA.

*******************************************************************************/

#include <stdio.h>
#define PI 3.14159 // define constante

int main()
{
    
    float raio, alt, vol;
    
    printf("Informe o raio da base da lata de óleo em cm: ");
    scanf("%f",&raio);
    
    printf("\nInforme a altura da lata de óleo em cm: ");
    scanf("%f",&alt);
    
    vol = PI * raio * raio * alt;
    
    printf("\nConsiderando a fórmula para cálculo de volume de cilindro, que é Volume = pi*(raio)^2 * altura");
    printf ("\n o volume da lata de óleo é = %f cm³", vol);

    return 0;
    
}
