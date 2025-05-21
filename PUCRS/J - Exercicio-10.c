
/*
10. Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as
duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a
média for menor que 5. Repita a operação até que o código lido seja negativo.
*/

#include <stdio.h>

int main() {
    int cod = 1;
    
    
    
    while ( cod >= 0 ) {
        
    printf("Informe código: "); scanf("%d", &cod);
    
    if(cod < 0)
        break;
    
        int maior = 0;
        int indice;
        int nota[3], soma[3];
        
        for (int x = 0; x <= 2; x++){
            
            printf("Informe %d ª nota: ", x + 1); scanf("%d", &nota[x]);
            if ( nota [x] > maior){
                maior = nota [x];
                indice = x;
            }
        }
        int media = 0;
        float mediaFinal;
        for (int x = 0; x <= 2; x++){
            
            if ( x == indice ){
                
                soma [x] = nota[x] * 4;
                printf("\nsoma [%d] =  nota [%d] (%d) * 4 = %d", x, x,nota[x], soma[x]);
            }
            else {
                soma [x] = nota[x] * 3;
                printf("\nsoma [%d] =  nota [%d] (%d) * 3 = %d", x, x,nota[x], soma[x]);
            }
            
            media = media + soma [x];
            printf ("  -  somatorio das notas = %d", media);
        }
        
        mediaFinal = media / (4.0 + 3.0 + 3.0);
       
        
        // printf ("\n\nindice: %d , maior nota: %d", indice, maior);
        printf("\n\nCódigo aluno: %d", cod);
        
        for (int x = 0; x <= 2; x++){
            
            printf("\nNota %d : %d", x + 1, nota[x]);
        }
        printf("\nMedia final: %.2f", mediaFinal);
        
        if( mediaFinal >= 5)
            printf("\nAprovado!\n");
        else 
            printf("\nReprovado!\n");
    
    }
    return 0;
}
