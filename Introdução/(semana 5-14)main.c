/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:15/09/25
 Descrição do problema: Faça um programa em C para apresentar os números no intervalo de 4 (inclusive) a 42 (inclusive). Utilize a instrução "while".
*/

#include <stdio.h>

int n = 4;

int main() 
{

    while(n != 43){
        printf("%i,", n);
    n++;

    }
    
    return 0;

}