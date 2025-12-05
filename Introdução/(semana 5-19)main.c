/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:15/09/25
 Descrição do problema: Escreva um algoritmo em C que imprima as seguintes sequências de números:
(1, 1 2 3 4 5 6 7 8 9 10),
(2, 1 2 3 4 5 6 7 8 9 10),
(3, 1 2 3 4 5 6 7 8 9 10),
(4, 1 2 3 4 5 6 7 8 9 10)
e assim sucessivamente, até que o primeiro número (antes da vírgula),
também chegue a 10.

*/

#include <stdio.h>

int n = 0;

int main() 
{

    for(n=1; n<=10; n++){
        printf("(%i, 1 2 3 4 5 6 7 8 9 10),\n", n);

    }
    
    return 0;

}