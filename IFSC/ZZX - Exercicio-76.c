/******************************************************************************

76. Faça um algoritmo que receba uma data no formato DDMMAAAA e escreva qual
a estação do ano correspondente (Primavera, Verão, Outono, Inverno).

Outono começa a 20 de março, o Inverno a 20 de junho 
a Primavera a 22 de setembro e o Verão a 21 de dezembro

*******************************************************************************/

#include <stdio.h>

int main()
{
    int data, mes, dia, aux;
    
    
    printf("Informe uma data: "); scanf("%d",&data);
    
    dia = data/1000000;
    mes = data/10000%100;
    
    printf("Dia: %d\nMês: %d\n\n", dia,mes);
    
    if(mes==12 && dia>=21 && dia<=31)
        aux = 1;
    if(mes>=1 && mes<=2)
        aux = 1;
    if(mes==3 && dia>=1 && dia<=20)
        aux = 1;
        
    if(mes==3 && dia>=20 && dia<=31)
        aux = 2;
    if(mes>=4 && mes<=5)
        aux = 2;
    if(mes==6 && dia>=1 && dia<=19)
        aux = 2;
    
    if(mes==6 && dia>=20 && dia<=30)
        aux = 3;
    if(mes>=7 && mes<=8)
        aux = 3;
    if(mes==9 && dia>=1 && dia<=21)
        aux = 3;
        
    if(mes==9 && dia>=22 && dia<=30)
        aux = 4;
    if(mes>=10 && mes<=11)
        aux = 4;
    if(mes==12 && dia>=1 && dia<=20)
        aux = 4;
        
    switch (aux){
        
        case 1: printf("Verão");
        break;
        case 2: printf("Outono");
        break;
        case 3: printf("Inverno");
        break;
        case 4: printf("Primavera");
        break;
    }

    return 0;
}
