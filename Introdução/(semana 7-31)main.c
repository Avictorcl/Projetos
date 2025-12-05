    /* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:09/10/25
    Descrição do problema: Faça um programa em C que, dadas duas relações de números contendo 8 e 9  valores cada uma respectivamente e obtidas a partir do teclado, forneça os números que aparecem nas duas listas. Por exemplo, se as relações forem u = {9, 32, 45, 21, 56, 67, 42, 55} e w = {24, 42, 32, 12, 45, 11, 67, 66, 78}, a função deve fornecer o vetor v = {32, 45, 67, 42}.
    */

#include <stdio.h>

int main() 
{   
    int i, j, k = 0;
    int u[8] = {9, 32, 45, 21, 56, 67, 42, 55};
    int w[9] = {24, 42, 32, 12, 45, 11, 67, 66, 78};
    int v[8];

    printf("Informe os 8 valores para o vetor u, 1 em cada linha.\n");
    for(i = 0; i < 8; i++){
        scanf("%i", &u[i]);

    }
        printf("Informe os 9 valores para o vetor w, 1 em cada linha.\n");
    for(j = 9; j < 9; j++){
        scanf("%i", &w[j]);

    }
    
    for(i = 0; i < 8; i++){

        for(j = 0; j < 9; j++){

            if(u[i] == w[j]){
        
                v[k] = u[i];
                k++;

            }
        }

    }
    for(i = 0; i < k; i++){

        printf("%i, ", v[i]);

    }

    return 0;
}