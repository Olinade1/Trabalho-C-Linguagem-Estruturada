/******************************************************************************

69. Crie um algoritmo chamado Zodiaco. Este algoritmo deve ler a data do seu
aniversário e atribuir um valor para a variável inteira chamada signo, conforme
lista abaixo:

a) 1o signo do zodíaco: Aquário (21/jan a 19/fev)
b) 2o signo do zodíaco: Peixes (20/fev a 20/mar)
c) 3o signo do zodíaco: Áries (21/mar a 20/abr)
d) 4o signo do zodíaco: Touro (21/abr a 20/mai)
e) 5o signo do zodíaco: Gêmeos (21/mai a 20/jun)
f) 6o signo do zodíaco: Câncer (21/jun a 21/jul)
g) 7o signo do zodíaco: Leão (22/jul a 22/ago)
h) 8o signo do zodíaco: Virgem (23/ago a 22/set)
i) 9o signo do zodíaco: Libra (23/set a 22/out)
j) 10o signo do zodíaco: Escorpião (23/out a 21/nov)
k) 11o signo do zodíaco: Sagitário (22/nov a 21/dez)
l) 12o signo do zodíaco: Capricórnio (22/dez a 20/jan)

O algoritmo deve imprimir uma mensagem, como o exemplo: "Você é do seguinte
signo do zodíaco: Libra"

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int date, sign, mes, dia;
    
    printf("Escreva data de aniversário DDMM: "); scanf("%d", &date);
    
    mes = date%100;
    dia = date/100;
    
    printf("Dia: %d\nMês: %d", dia, mes);
    
    if(mes==12){
        if(dia >= 1 && dia <= 21)
            sign = 11;
        if(dia >= 22 && dia <= 31)
            sign = 12;
    }
    if(mes==1){
        if(dia >= 1 && dia <= 20)
            sign = 12;
        if(dia >= 21 && dia <= 31)
            sign = 1;
    }
    if(mes==2){
        if(dia >= 1 && dia <= 19)
            sign = 1;
        if(dia >= 20 && dia <= 29)
            sign = 2;
    }
    if(mes==3){
        if(dia >= 1 && dia <= 20)
            sign = 2;
        if(dia >= 21 && dia <= 31)
            sign = 3;
    }
    if(mes==4){
        if(dia >= 1 && dia <= 21)
            sign = 3;
        if(dia >= 22 && dia <= 30)
            sign = 4;
    }
    if(mes==5){
        if(dia >= 1 && dia <= 20)
            sign = 4;
        if(dia >= 21 && dia <= 31)
            sign = 5;
    }
    if(mes==6){
        if(dia >= 1 && dia <= 20)
            sign = 5;
        if(dia >= 21 && dia <= 30)
            sign = 6;
    }
    if(mes==7){
        if(dia >= 1 && dia <= 21)
            sign = 6;
        if(dia >= 22 && dia <= 31)
            sign = 7;
    }
    if(mes==8){
        if(dia >= 1 && dia <= 22)
            sign = 7;
        if(dia >= 23 && dia <= 31)
            sign = 8;
    }
    if(mes==9){
        if(dia >= 1 && dia <= 22)
            sign = 8;
        if(dia >= 23 && dia <= 30)
            sign = 9;
    }
    if(mes==10){
        if(dia >= 1 && dia <= 22)
            sign = 9;
        if(dia >= 23 && dia <= 31)
            sign = 10;
    }
    if(mes==11){
        if(dia >= 1 && dia <= 21)
            sign = 10;
        if(dia >= 22 && dia <= 30)
            sign = 11;
    }
    
    printf("\n\nVocê é do seguinte signo do zodíaco: ");
    
    switch (sign){
        
        case 12 : printf("Capricórnio");
        break;
        
        case 1 : printf("Aquário");
        break;
        
        case 2 : printf("Peixes");
        break;
        
        case 3 : printf("Áries");
        break;
        
        case 4 : printf("Touro");
        break;
        
        case 5 : printf("Gêmeos");
        break;
        
        case 6 : printf("Câncer");
        break;
        
        case 7 : printf("Leão");
        break;
        
        case 8 : printf("Virgem");
        break;
        
        case 9 : printf("Libra");
        break;
        
        case 10 : printf("Escorpião");
        break;
        
        case 11 : printf("Sagitário");
        break;
        
    }

    return 0;
}
