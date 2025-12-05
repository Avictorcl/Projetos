/* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:26/09/25
    Descrição do problema: Faça um programa em C para calcular o fatorial de um número inteiro informado pelo usuário.
*/

#include <stdio.h>

int i, f=1, n;

int main() 
{   

//informar o número do valor pra calcular o fatorial4

   printf("Informe um número para obter o fatorial:\n");
   scanf("%i", &n);

//calcular o fatorial do número informado

    for(i=n; i>=1; i--){
        f=f*i;
    }   
    printf("%i", f);

}