/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:05/09/25
 Descrição do problema:  Calcular a média de 50 números informados e mostrar a média.

 Algoritmo Informal:

    1. Início.
        2. Declarar as variáveis n, n1, m como reais e l como inteiro.
        3. Inicializar n1 com 0 (será o acumulador da soma).
        4. Inicializar m com 0 (armazenará a média final).
        5. Inicializar l com 1 (será o contador do loop).
        6. Enquanto o contador l for menor ou igual a 50:
        a. Ler um valor numérico digitado pelo usuário e armazenar em n.
        b. Somar o valor de n ao valor de n1 (n1 = n1 + n).
        c. Incrementar o contador l em 1 (l = l + 1).
        7. Após o fim do loop, calcular a média: m = n1 / 50.
        8. Exibir na tela o valor de m, formatado com uma casa decimal.
    9. Fim.

 Teste de mesa:

+-------------------------------------+------------------------------------+
|         ENTRADA DE VALORES          |               SAÍDA                |
| (Valores digitados pelo usuário,    |    (Resultado final exibido)       |
|          um por vez)                |                                    |
+-------------------------------------+------------------------------------+
|                                     |                                    |
| 1.0                                 |                                    |
| 2.0                                 |                                    |
| 3.0                                 |                                    |
| ...                                 |                                    |
| 50.0                                |                                    |
|                                     | 25.5                               |
+-------------------------------------+------------------------------------+

*/

#include <stdio.h>

float n = 0, n1 = 0,  m = 0, l = 1;


int main() {

while(l <= 50){

   scanf("%f", &n);
n1 = n + n1;
l = l+1;

}

m = n1/50;
    printf("%.1f", m);

return 0;

}