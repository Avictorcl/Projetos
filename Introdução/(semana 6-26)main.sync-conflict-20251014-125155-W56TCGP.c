/* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:04/10/25
    Descrição do problema: Criar  um programa que leia um número inteiro n maior que 1 e imprima
    'quadrados' de tamanho n × n utilizando o caractere "*". Por exemplo, se
    o número informado for 3, o resultado impresso será:

    * * *
    * * *
    * * * 

*/

#include <stdio.h>

int main() {
    // Declara a variável que armazenará o tamanho do quadrado
    int n;

    // Solicita ao usuário que insira o tamanho
    printf("Informe um número para o tamanho do quadrado:\n");
    scanf("%d", &n);

    // Valida se o número é maior que 1
    if (n <= 1) {
        return 1; // Encerra o programa com código de erro
    }

    // Laço externo: itera sobre as LINHAS do quadrado
    // A variável 'i' representa a linha atual, de 1 até n.
    for (int i = 1; i <= n; i++) {
        
        // Laço interno: itera sobre as COLUNAS de cada linha
        // A variável 'j' representa a coluna atual, de 1 até n.
        for (int j = 1; j <= n; j++) {
            // Imprime o caractere '*' seguido de um espaço para formatação
            printf("* "); 
        }
        
        // Após o laço interno terminar (uma linha inteira foi impressa),
        // imprime uma quebra de linha para passar para a próxima linha.
        printf("\n"); 
    }

    return 0; // Indica que o programa terminou com sucesso
}
