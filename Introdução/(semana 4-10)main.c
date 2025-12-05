/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:11/09/25
 Descrição do problema: Crie um programa que solicite que o usuário informe cinco números. A seguir, o programa deve informar qual e o maior número e também qual é o menor número.
*/

#include <stdio.h>

int n, l = 0, ma, mn;

int main() 
{

    scanf("%i", &n);
    ma = n;
    mn = n;

for(l = 2; l <= 5; l++){

    scanf("%i", &n);

if(n > ma){

ma = n;
}

if(n < mn){

mn = n;
}
}

printf("O maior número é: %i\n", ma);
printf("O menor número é: %i\n", mn);

    return 0;
}