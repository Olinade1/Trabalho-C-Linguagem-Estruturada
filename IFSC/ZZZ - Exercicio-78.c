/******************************************************************************

78. Faça um programa que lê quatro valores: I, A, B e C, onde I é um número inteiro
e positivo e A, B, e C são quaisquer valores reais. O programa deve escrever os
valores lidos e:

• se I = 1, escrever os três valores A, B e C em ordem crescente;
• se I = 2, escrever os três valores A, B e C em ordem decrescente;
• se I = 3, escrever os três valores A, B, e C de forma que o maior valor fique
entre os outros dois;

• se I não for um dos três valores acima, dar uma mensagem indicando isto.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    float a, b, c;
    
    
    printf("Informe valor A: "); scanf("%f",&a);
    printf("Informe valor B: "); scanf("%f",&b);
    printf("Informe valor C: "); scanf("%f",&c);
    
    printf("\nOpções: \n1 - Ordem crescente\n2 - Ordem decrescente\n3 - Maior valor entre os outros dois");
    printf("\n\nEscolha a opção: "); scanf("%d",&i);
    
    switch (i){
        
        case 1: 
            if(a<b && a < c){
                printf("%.3f\n",a);
                if(b<c){
                    printf("%.3f\n",b);
                    printf("%.3f\n",c);
                }
                if(c<b){
                    printf("%.3f\n",c);
                    printf("%.3f\n",b); 
                }
            }
            if(b<a && b < c){
                printf("%.3f\n",b);
                if(a<c){
                    printf("%.3f\n",a);
                    printf("%.3f\n",c);
                }
                if(c<a){
                    printf("%.3f\n",c);
                    printf("%.3f\n",a); 
                }
            }
            if(c<b && c < a){
                printf("%.3f\n",c);
                if(b<a){
                    printf("%.3f\n",b);
                    printf("%.3f\n",a);
                }
                if(a<b){
                    printf("%.3f\n",a);
                    printf("%.3f\n",b); 
                }
            }
        break;
        
        case 2: 
            if(a>b && a > c){
                printf("%.3f\n",a);
                if(b>c){
                    printf("%.3f\n",b);
                    printf("%.3f\n",c);
                }
                if(c>b){
                    printf("%.3f\n",c);
                    printf("%.3f\n",b); 
                }
            }
            if(b>a && b > c){
                printf("%.3f\n",b);
                if(a>c){
                    printf("%.3f\n",a);
                    printf("%.3f\n",c);
                }
                if(c>a){
                    printf("%.3f\n",c);
                    printf("%.3f\n",a); 
                }
            }
            if(c>b && c>a){
                printf("%.3f\n",c);
                if(b>a){
                    printf("%.3f\n",b);
                    printf("%.3f\n",a);
                }
                if(a>b){
                    printf("%.3f\n",a);
                    printf("%.3f\n",b); 
                }
            }
        break;
        
        case 3: 
            if(a>b && a>c){
                printf("%.3f\n",b);
                printf("%.3f\n",a);
                printf("%.3f\n",c);
            }
            if(b>a && b > c){
                printf("%.3f\n",a);
                printf("%.3f\n",b);
                printf("%.3f\n",c);
            }
            if(c>b && c>a){
                printf("%.3f\n",a);
                printf("%.3f\n",c);
                printf("%.3f\n",b);
            }
        break;
        
        default: printf("\nOpção inválida");
    }

    return 0;
}
