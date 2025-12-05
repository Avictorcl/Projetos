    /* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:25/09/25
    Descrição do problema: Faça um programa em C que, dadas duas relações de números contendo 8 e 9  valores cada uma respectivamente e obtidas a partir do teclado, forneça os números que aparecem nas duas listas. Por exemplo, se as relações forem u = {9, 32, 45, 21, 56, 67, 42, 55} e w = {24, 42, 32, 12, 45, 11, 67, 66, 78}, a função deve fornecer o vetor v = {32, 45, 67, 42}.
    */

#include <stdio.h>

int main() 
{   

int v[20], i = 0;
    
    for(i=0; i<20; i++){

    v[i]=10+i;

    }

    for(i=0; i<20; i+=2){
        printf("%i,", v[i]);
    }

        printf("\n");

    for(i=1; i<20; i+=2){
        printf("%i,", v[i]);
    }

        
    return 0;
}