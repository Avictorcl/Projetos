/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:04/09/25
 Descrição do problema: mostrar a média de três números informados com uma casa após a vírgula e após mostrar a média, informar "Aprovado" se a média for maior ou igual que 6.

 Algoritmo Informal:

   1. Início.
      2. Peça ao usuário para digitar a primeira nota e guarde o valor em n1.
      3. Peça para digitar a segunda nota e guarde em n2.
      4. Peça para digitar a terceira nota e guarde em n3.
      5. Calcule a média das três notas (n1 + n2 + n3) / 3 e guarde o resultado em m.
      6. Mostre na tela o valor da média m, com uma casa decimal.
      7. Verifique se a média m é maior ou igual a 6.0.
      8. Se for, mostre a média m novamente e depois escreva "Aprovado".
   9. Fim.

 Teste de mesa:

+-------------------------------------------------------------------+
| Cenário 1: Aluno Aprovado                                         |
+---------------------------------------+---------------------------+
| Variaveis de Entrada (n1, n2, n3)     | Saida (Tela)              |
+---------------------------------------+---------------------------+
| 7.0                                   |                           |
| 8.0                                   |                           |
| 9.0                                   |                           |
|                                       | 8.0                       |
|                                       | Aprovado                  |
+---------------------------------------+---------------------------+



+-------------------------------------------------------------------+
| Cenário 2: Aluno Reprovado                                        |
+---------------------------------------+---------------------------+
| Variaveis de Entrada (n1, n2, n3)     | Saida (Tela)              |
+---------------------------------------+---------------------------+
| 4.0                                   |                           |
| 5.0                                   |                           |
| 5.0                                   |                           |
|                                       | 4.7                       |
+---------------------------------------+---------------------------+

*/

#include <stdio.h>

float n1, n2, n3,  m;

int main() {

   scanf("%f", &n1);
   scanf("%f", &n2);
   scanf("%f", &n3);

m = (n1 +n2 + n3)/3;

printf("%.1f\n", m);

   if(m >= 6.0){
   
      printf("Aprovado");
   }

return 0;

}
