/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:15/09/25
 Descrição do problema: Faça um programa em C para apresentar os números inteiros no intervalo de 5 (inclusive) a 100 (inclusive). Utilize a instrução "do - while".
*/

#include <stdio.h>

int n = 5;

int main() 
{

    do{
        printf("%i,", n);
        n++;

    }while(n != 101);
    
    return 0;

}