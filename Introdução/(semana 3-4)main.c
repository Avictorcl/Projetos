/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:04/09/25
 Descrição do problema: Receber números e escrever na tela até que se digite o número 4890.

 Algoritmo Informal:

   1. Início.
       2.  Crie uma variável inteira n e defina seu valor inicial como 0.
        3. Enquanto o valor de n for diferente de 4890, repita o seguinte passo:
        a. Peça ao usuário para digitar um número e guarde este novo valor em n.
        4. Quando o usuário finalmente digitar o número 4890, a condição do passo 3 se tornará falsa, o loop irá parar.
    5. Fim.

 Teste de mesa:

+------------------------------------------------------+---------------------+
|       Sequência de Entradas (Valores digitados)      |   Saída na Tela     |
|         (O programa para ao receber 4890)            |                     |
+------------------------------------------------------+---------------------+
| 4890                                                 |   (Nenhuma saída)   |
+------------------------------------------------------+---------------------+
| 10                                                   |   (Nenhuma saída)   |
| 250                                                  |                     |
| -5                                                   |                     |
| 4890                                                 |                     |
+------------------------------------------------------+---------------------+
| 0                                                    |   (Nenhuma saída)   |
| 4890                                                 |                     |
+------------------------------------------------------+---------------------+
| 4889                                                 |   (Nenhuma saída)   |
| 4891                                                 |                     |
| 4890                                                 |                     |
+------------------------------------------------------+---------------------+
*/

#include <stdio.h>

int n = 0;

int main() {

while(n != 4890){

    scanf("%i", &n);
    if(n != 4890){
    printf("%i\n", n);
    }
}

return 0;

}
