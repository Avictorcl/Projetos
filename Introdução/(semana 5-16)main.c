/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:15/09/25
 Descrição do problema: Faça um programa em C para apresentar os números de 30 (inclusive) até 0 (inclusive) em ordem decrescente.
*/

#include <stdio.h>

int n = 30;

int main() 
{

    for(n=30; n>=0; n--){
        printf("%i,", n);
    }
    
    return 0;

}