/******************************************************************************

61. Um usuário deseja um algoritmo pelo qual possa escolher que tipo de média
deseja calcular a partir de três notas. Faça um algoritmo que leia as notas, a
opção escolhida pelo usuário e calcule a média:
1- aritmética
2- ponderada (pesos 3, 3, 4)

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int nota[3], codigo;
    float media;
    
    printf("Informe as 3 notas: \n"); 
    for(int i = 0; i < 3; i++){
        printf("%d ª nota: ", i + 1); scanf("%d",&nota[i]);
    }
    
    printf("Informe opcao de cálculo: \n\n1- aritmética; \n2- ponderada (pesos 3, 3, 4)"); 
    printf("\n\nOpção: "); scanf("%d",&codigo);
    
    if(codigo==1)
        media = (nota[0] + nota[1] + nota[2])/3.0;
    if(codigo==2)
        media = (nota[0] * 3 + nota[1] * 3 + nota[2] * 4)/10.0;
        
    printf("Média: %.2f\n\n", media);
    
    return 0;
}
