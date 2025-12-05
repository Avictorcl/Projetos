/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:15/09/25
 Descrição do problema: Criar um programa que imprima os números pares entre 0 (inclusive) a 1.000 (inclusive) em ordem crescente.
*/

#include <stdio.h>

int n = 0;

int main() 
{

    for(n=0; n<=1000; n = n+2){
        printf("%i,", n);

    }
    
    return 0;

}