/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:15/09/25
 Descrição do problema: Faça um programa em C para apresentar os números no intervalo de 0 (inclusive) a 30 (inclusive). Utilize a instrução "for".
*/

#include <stdio.h>

int n = 0;

int main() 
{

    for(n=0; n<=30; n++){
        printf("%i,", n);
    }
    
    return 0;

}