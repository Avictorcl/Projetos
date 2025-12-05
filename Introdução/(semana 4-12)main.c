/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:11/09/25
 Descrição do problema: Faça um programa em C que apresente como saída as séries abaixo:

10: 11 12 13 14 15 16 17 18 19
11: 12 13 14 15 16 17 18 19 20
...

Obs: o programa deverá obrigatoriamente usar estruturas de repetição/iteração para gerar os valores de saída.

*/

#include <stdio.h>

int x, n, c, l;

int main() {

    x = 10;


for(l; l <= 40; l++){

c = x + 8;
n = x - 1;
    printf("%i: ", x);

for(n = x; n <= c; n++){

    printf("%i ", n+1);
}
     printf("\n");

     x = x+1;
}

return 0;

}