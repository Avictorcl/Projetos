/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:11/09/25
 Descrição do problema: Crie um programa que solicite que o usuário informe um número. A seguir o programa deve informar se esse número é par ou ímpar. Dica: o operador “%” retorna o resto da divisão. Por exemplo, 5%2=1 e 8%3=2
*/

#include <stdio.h>

int n, f;

int main() 
{

    scanf("%i", &n);
    f = n % 2;

    if(f != 0){

        printf("impar");
    }
    else{
        printf("par");
    }

    return 0;

}