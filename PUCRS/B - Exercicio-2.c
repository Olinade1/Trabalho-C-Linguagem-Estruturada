/* 2. Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E.
 E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!
 
 */

#include <stdio.h>

int main() {
    
    int n;
    float e;
    int nfatorial;
    
    printf("Digite valor de N: ");
    scanf("%d",&n);

    nfatorial = n;
    int i = 0;
    int nmenos1 = n;
    
    if (n==0)
        nfatorial = 1;
    
    else {
        while (i<n){
    
            if (nmenos1>1){
                nfatorial = nfatorial * (nmenos1 - 1);
                nmenos1--;
            }
                        
        i++;
        }
    }  
    
    printf("\nN! = %d",nfatorial);
    
    e = 1.0 + 1.0 / 1.0 + 1.0 / 2.0 + 1.0 / (3.0*2.0) + 1.0 / nfatorial;
    
    printf("\n\nResultado de E = %f",e);
    
    return 0;
}
