/* 6. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte
codificação:
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0

*/

#include <stdio.h>

int main() {
    
    printf("Urna eletrônica. Digite '0' para encerrar \n\n");
    
    int count[6] = {0, 0, 0, 0, 0, 0};
    int voto;
    
    do{
        printf("Informe seu voto: ");
        scanf("%d", &voto);
        
        if(voto == 1)
            count[0] += 1;
        if(voto == 2)
            count[1] += 1;
        if(voto == 3)
            count[2] += 1;
        if(voto == 4)
            count[3] += 1;
        if(voto == 5)
            count[4] += 1;
        if(voto == 6)
            count[5] += 1;
            
    }while(voto != 0);
    
    printf("Número de votos:\n\n");
    
    for(int i = 0; i < 6; i++){
        if (i == 4)
            printf("Nulo: %d\n", count[i]);
        else if (i == 5)
            printf("Branco: %d", count[i]);
        else
            printf("Candidato %d : %d\n", i + 1, count[i]);
    
    }
    
    return 0;
}
