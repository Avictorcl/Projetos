/* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:04/10/25
    Descrição do problema: Faça um programa para apresentar todos os números primos em um intervalo de a até b. Os valores do intervalo [a, b] serão informados pelo usuário (não consideramos 1 como número primo).
*/

#include <stdio.h>

int main() {
    // Declaração das variáveis
    int numero, soma = 0, digito;

    // Solicita ao usuário que insira um número
   printf("Informe um número para a soma de cada dígito:\n");
    scanf("%d", &numero);

    // Guarda o valor original do número para exibição no final
    // numeroOriginal = numero;

    // Validação para garantir que o número está no intervalo correto
    if (numero <= 0 || numero >= 10000) {
        return 1; // Retorna 1 para indicar que o programa terminou com um erro
    }

    // Loop para calcular a soma dos algarismos
    while (numero > 0) {
        // 1. Pega o último algarismo do número usando o operador módulo (%)
        digito = numero % 10;
        
        // 2. Adiciona o algarismo obtido à variável 'soma'
        soma += digito;
        
        // 3. Remove o último algarismo do número através de uma divisão inteira
        numero /= 10;
    }

    // Exibe o resultado final
    printf("%d\n", soma);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
