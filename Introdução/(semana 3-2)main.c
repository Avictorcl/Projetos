/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:04/09/25
 Descrição do problema: mostrar a sequência de 100 números inteiros a partir de um número informado (iniciar no próximo número inteiro).

 Algoritmo Informal:


    1. Início
        2. Peça ao usuário para digitar um número inteiro e guarde este valor na variável n.
        3. Crie uma variável chamada l (que servirá como limite) e defina seu valor como o resultado de n + 99.
        4. Enquanto o valor de n for menor ou igual ao valor fixo de l, repita os seguintes passos:
        a. Some 1 ao valor de n.
        b. Mostre o novo valor de n na tela.
        5. Quando n se tornar maior que l, pare a repetição.
    6. Fim

 Teste de mesa:

    +--------------+--------------+
    | Valor de 'n' | Saida (Tela) |
    +--------------+--------------+
    | 97 (inicial) |              |
    | 98           |              |
    |              |      98      |
    | 99           |              |
    |              |      99      |
    | 100          |              |
    |              |      100     |
    |     ...      |      ...     |
    +--------------+--------------+

*/

#include <stdio.h>

int n; 

int main() {

    scanf("%i", &n);
    
int l = n + 99;

    while(n <= l){

    n=n+1;

        printf("%i\n", n);

    }

    return 0;
}