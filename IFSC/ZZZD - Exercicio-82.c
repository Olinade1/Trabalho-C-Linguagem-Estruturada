/******************************************************************************

82. Construa um algoritmo que, tendo como dados de entrada o preço de um
produto e um código de origem, mostre o preço junto de sua procedência (ex.
500,00 – Sul). Caso o código não seja nenhum dos especificados, o produto
deve ser encarado como importado.

Código de origem
1 – Sul 5 ou 6 – Nordeste
2 – Norte 7 ou 8 ou 9 – Sudeste
3 – Leste 10 até 20 – Centro Oeste
4 – Oeste 25 até 35 – Nordeste

*******************************************************************************/

#include <stdio.h>

int main(){

    int cod;
    float preco;
    
    printf("Informe valor do produto: "); scanf("%f",&preco);
    printf("Informe o código: "); scanf("%d",&cod);
    
    switch (cod){
        
        case 1: printf("%.2f - Sul",preco);
        break;
        case 2: printf("%.2f - Norte",preco);
        break;
        case 3: printf("%.2f - Leste",preco);
        break;
        case 4: printf("%.2f - Oeste",preco);
        break;
        case 5: case 6: printf("%.2f - Nordeste",preco);
        break;
        case 7: case 8: case 9: printf("%.2f - Sudeste",preco);
        break;
        case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
        printf("%.2f - Centro Oeste",preco);
        break;
        case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35:
        printf("%.2f - Nodeste",preco);
        break;
        
        default: printf("%0.2f - Importado",preco);
  
    }

    return 0;
}