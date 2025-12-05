/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:05/09/25
 Descrição do problema: Calcular a média de números que foram informados até se digitar -1. A cada número informado mostrar a quantidade de números já informados. Dê precisão de 1 casa decimal após a vírgula na resposta.

 Algoritmo Informal:

    1. Início.

      2. Declarar as variáveis n, n1, m, l como reais (float).
      3. Inicializar n1 com 0 (será o acumulador da soma).
      4. Inicializar l com 0 (será o contador de entradas).
      5. Inicializar m com 0 (armazenará a média final).
         (Nota: A variável n é inicializada com 0 por padrão no C, o que permite a entrada no loop pela primeira vez, pois 0 é diferente de -1).
      6. Enquanto o valor atual de n for diferente de -1:
          a. Ler um valor numérico digitado pelo usuário e armazenar em n.
          b. Somar o valor de n ao acumulador n1 (n1 = n1 + n).
          c. Incrementar o contador de entradas l em 1 (l = l + 1).
      7. Após o fim do loop, realizar as correções para remover o efeito da última entrada (-1):
          a. Corrigir o contador de entradas: l = l - 1.
          b. Corrigir o acumulador da soma: n1 = n1 + 1.
      8. Calcular a média final: m = n1 / l.
      9. Exibir na tela o valor de m, formatado com uma casa decimal.
    10. Fim.

 Teste de mesa:

   +-------------------------------------+------------------------------------+
   |         ENTRADA DE VALORES          |                 SAÍDA              |
   | (Valores digitados pelo usuário,    |      (Resultado final exibido)     |
   |          um por vez)                |                                    |
   +-------------------------------------+------------------------------------+
   |                                     |                                    |
   | 10.0                                |                                    |
   | 20.0                                |                                    |
   | 60.0                                |                                    |
   | -1.0  (Flag de parada)              |                                    |
   |                                     | 30.0                               |
   +-------------------------------------+------------------------------------+

*/

#include <stdio.h>

float n, n1 = 0,  m = 0, l = 0;


int main() {

while(n != -1){

   scanf("%f", &n);
   
n1 = n + n1;
l = l+1;

}

int x = 0;
l = l - 1;
n1 = n1 + 1;
m = n1/l;

   while (x != l){

   x++;
   printf("%i\n", x);

   }
    printf("%.1f", m);

return 0;

}