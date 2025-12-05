/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:15/09/25
 Descrição do problema: Criar um programa que imprima os números ímpares entre 1 (inclusive) a 1.000 (inclusive) em ordem decrescente.
*/

#include <stdio.h>

int n = 999;

int main() 
{

    for(n=999; n>=0; n-=2){
        printf("%i,", n);

    }
    
    return 0;

}