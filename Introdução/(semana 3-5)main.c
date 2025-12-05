/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:05/09/25
 Descrição do problema: Calcular a média de 5 números informados e mostre a média.

 Algoritmo Informal:

    1. Início.
      2. Declarar seis variáveis para números decimais: n1, n2, n3, n4, n5 (para as entradas) e m (para a média).
      3. Ler o primeiro número digitado pelo usuário e guardar em n1.
      4. Ler o segundo número digitado pelo usuário e guardar em n2.
      5. Ler o terceiro número digitado pelo usuário e guardar em n3.
      6. Ler o quarto número digitado pelo usuário e guardar em n4.
      7. Ler o quinto número digitado pelo usuário e guardar em n5.
      8. Calcular a média: Somar n1 + n2 + n3 + n4 + n5, dividir o resultado por 5 e guardar o valor na variável m.
      9. Exibir na tela o valor da variável m, formatado com apenas uma casa decimal. 
    5. Fim.

 Teste de mesa:

+------------------------------------------------------+---------------------+
|                  TESTE DE MESA SIMPLIFICADO          |                     |
|               (Foco em Entrada e Saída)              |                     |
+------------------------------------------------------+---------------------+
|          Dados de Entrada (Valores digitados)        |  Saída Esperada     |
|              (n1, n2, n3, n4, n5)                    |         (m)         |
+------------------------------------------------------+---------------------+
| 5.0                                                  |                     |
| 7.5                                                  |                     |
| 10.0                                                 |                     |
| 8.5                                                  |                     |
| 4.0                                                  |                     |
|                                                      | 7.0                 |
+------------------------------------------------------+---------------------+

*/

#include <stdio.h>

float n1, n2, n3, n4, n5,  m;

int main() {

   scanf("%f", &n1);
   scanf("%f", &n2);
   scanf("%f", &n3);
   scanf("%f", &n4);
   scanf("%f", &n5);

m = (n1 +n2 + n3 + n4 + n5)/5;

   printf("%.1f\n", m);

return 0;

}
