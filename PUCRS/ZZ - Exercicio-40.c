/*
40. Escrever um algoritmo que lê um valor n que indica quantos valores devem ser lidos para m,
valores inteiros e positivos, com leitura de um valor de cada vez. Escreva
uma tabela contendo o valor lido, o somatório dos inteiros de 1 até m e o fatorial de m.
*/

#include <stdio.h>

int main() {
    
    char ok;
    
    do {
        
          int n = 0;
        
        do {
            printf("Informe o número de leituras n: ");
            scanf("%d", &n);
            if(n < 0)
                printf("Digite um número maior que zero!\n\n");
        } while (n < 0);
        
        int cout = 0, m = 0;
        while(cout < n || m < 0){
            
            printf("Informe o valor de m: ");
        	scanf("%d", &m);
        	
        	if(m < 0) {
        	    printf("O número digitado precisa ser inteiro e positivo\n\n");
        	}
        	else {
        
            	printf("\nNúmero: %d", m);
            	printf("\nSomatório de 1 até %d: ", m);
            	
            	int somaZ = 0, aux1 = m;
            	for(int cout2 = 1; aux1 >= cout2; cout2++){
            	    somaZ = somaZ + cout2;
            	    
            	    printf("%d", cout2);
            	    if (cout2 == m)
            	        break;
        	        printf(" + ");
            	}
            	
            	printf(" = %d \n", somaZ);
            	printf("Fatorial de %d: ", m);
            	
            	if(m == 0)
            	    printf(" = 1 \n\n");
            	    
            	else {    
                	int fat = 1;
                	for(int cout3 = 1; m >= cout3; m--){
                	    fat = fat * m;
                	    
                	    printf("%d", m);
                	    if (m == 1)
                	        break;
            	        printf(" * ");
                	}
                	printf(" = %d \n\n", fat);
            	}
            	
            cout++;
        	}
        	
        }
        
    printf("\n\nPara repetir o programa, tecle 1 ou qualquer letra para sair: ");
    scanf("%c",&ok); scanf("%c",&ok);

    } while ( ok == '1');
	return 0;
}
