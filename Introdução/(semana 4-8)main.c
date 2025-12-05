/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:11/09/25
 Descrição do problema: Faça um programa que peça dois número inteiros ao usuário e mostre se o segundo número é maior, menor ou igual ao primeiro número.

 Algoritmo Informal:

    1. Início.
      2. Declarar duas variáveis inteiras, 'n1' e 'n2'.
      3. Exibir uma mensagem pedindo o primeiro número.
      4. Ler o valor digitado pelo usuário e armazenar na variável 'n1'.
      5. Exibir uma mensagem pedindo o segundo número.
      6. Ler o valor digitado pelo usuário e armazenar na variável 'n2'.
      7. Comparar os números:
        a. Se 'n2' for maior que 'n1', exibir a mensagem "Segundo numero é maior que o primeiro.".
        b. Senão, se 'n2' for menor que 'n1', exibir a mensagem "Segundo numero é menor que o primeiro.".
        c. Senão (caso nenhuma das condições anteriores seja verdadeira), exibir a mensagem "Os números são iguais.".
    8. Fim.

 Teste de mesa:

   +-------------------------------------+---------------------------------------------+
    |         ENTRADA DE VALORES          |                    SAÍDA                    |
    |  (Valores digitados para n1 e n2)   |          (Resultado final exibido)          |
    +-------------------------------------+---------------------------------------------+
    | n1 = 10, n2 = 20                    |                                             |
    |                                     | Segundo numero é maior que o primeiro.      |
    | n1 = 50, n2 = 15                    |                                             |
    |                                     | Segundo numero é menor que o primeiro.      |
    | n1 = 7,  n2 = 7                     |                                             |
    |                                     | Os números são iguais.                      |
    | n1 = 7,  n2 = 7                     |                                             |
    |                                     | Os números são iguais.                      |
    | n1 = -5, n2 = -2                    |                                             |
    |                                     | Segundo numero é maior que o primeiro.      |
    | n1 = 0,  n2 = 0                     |                                             |
    |                                     | Os números são iguais.                      | 
    +-------------------------------------+---------------------------------------------+

*/

#include <stdio.h>


int main() {

int n1 = 0, n2 = 0;

scanf("%i", &n1);
scanf("%i", &n2);

if(n1 < n2){

    printf("Segundo numero é maior que o primeiro.");
}

else if (n2 < n1){

    printf("Segundo numero é menor que o primeiro.");
}

else{

printf("Segundo numero é igual ao primeiro.");
}
return 0;

}