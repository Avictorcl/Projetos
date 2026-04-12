/*
?   Operadores Uteis:

-> "&": Retorna o endereço de memória de uma variável;
-> "*": Retorna o conteúdo do endereço de memória apontado pelo ponteiro. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//* Ponteiro em memória:
void ponteiro_1(){
    int a = 12; // A variável "a" ocupa um endereço na memória
    int *p; // O ponteiro "p" é declarado (aponta para o vazio)

    p = &a; // "p" agora guarda o endereço de "a"
    *p = 100; // Alteramos o conteúdo que está no endereço apontado (ou seja "a")

    printf("Novo valor de a: %d", a);
}


//* Ponteiros para Ponteiros:
void ponteiro_2(){
    int a = 5;
    int *a_ptr = &a; // Ponteiro aponta para a variável "a"
    int **b_ptr = &a_ptr; // Ponteiro duplo aponta para o ponteiro "a_ptr"

    printf("Valor via a_ptr (*a_ptr): %d\n", *a_ptr);
    printf("Valor via b_ptr (**b_ptr): %d\n", **b_ptr);
}


//* Ponteiros como parametros:
void swap_parcial(int x, int *y){        // Função auxiliar que recebe um valor normal ('x') e um endereço de memória ('y') 
    int z = x;                          // Cria uma variável temporária 'z' que recebe a cópia do valor de 'x'.
    x = *y;                            // O clone de 'x' recebe o conteúdo apontado por 'y' (mas isso não afeta 'a' original lá fora)
    *y = z;                           // Vai no endereço apontado por 'y' (variável 'b' original) e injeta o valor que estava salvo em z
}

void ponteiro_3(){
    int a = 10, b = 20;

    printf("Abtes da função a=%d, b=%d\n", a, b);   // Imprime o estado atual das variáveis

    swap_parcial(a, &b);                            // Chama a função enviando uma cópia de 'a' e o ENDEREÇO REAL de 'b'

    printf("Depois da função: a=%d, b=%d", a, b);   // Imprime o estado final das variáveis: 'a' continua 10, 'b' vira 10

}


//* Ponteiros para Structs:
typedef struct{         // Cria um molde chamado ParV que contém dois inteiros 'a' e 'b';
    int a, b;
} ParV;

void ponteiro_4(){
    ParV pa;            // Cria uma variável chamada 'pa' usando o molde ParV
    ParV *p2 = &pa;     // Declara um ponteiro 'p2' do tipo 'ParV' que recebe o endereço de memória de 'pa'
    p2->a = 3;          // Usa o operador (->) para entrar na estrutura apontada por 'p2' e altera a variável a para "3"
    p2->b = 5;          // Usa o operador (->) para entrar na estrutura e alterar na variável 'b' para "5"

    printf("Valores da struct acessados a=%d, b=%d", pa.a, pa.b);
}


//* Vetores e ponteiros:
void ponteiro_5(){
    int v[3] = {10, 20, 30};
    int *ptr;

    ptr = v;

    printf("O primeiro elemento do vetor apontando é: %d\n", *ptr);
}

//* Aritmética de ponteiros:
void ponteiro_6(){
    int v[5];

    *(v + 0) = 9;       // Pega o endreço base de 'v', soma 0 (fica na primeira casa), e injeta o valor 9
    *(v + 1) = 8;       // Pega o endreço base de 'v', soma 1 (fica na segunda casa), e injeta o valor 8
    *(v + 2) = 7;       // Pega o endreço base de 'v', soma 2 (fica na terceira casa), e injeta o valor 7

    printf("Elemento índice 0: %d\n", *(v + 0));
    printf("Elemento índice 1: %d\n", *(v + 1));
    printf("Elemento índice 2: %d\n", *(v + 2));

}

//* Ponteiros para funções
int soma (int x, int y){
    return x + y;
}

int produto (int x, int y){
    return x * y;
}

void ponteiro_7(){
    int (*p)(int, int);      // Declara 'p' como um ponteiro capaz de apontar para funções que recebem dois (int, int) e retornam um (int).
    p = soma;

    printf("Resultado executando a soma: %d\n", p(2, 3));
    
    p = produto;
    printf("Resultado executando o produto: %d", p(2, 3));
}


//* Funções como parâmetros
void executa(int (*f)(int,int), int a, int b){              // Função principal 'executa'. Ela recebe um ponteiro para função 'f', e dois inteiros 'a' e 'b'
    printf("Resultado do processamento: %d\n", f(a, b));    // Ela usa o ponteiro 'f' recebido para executar a função que foi passada, usando os valores de 'a' e 'b' 
}

void ponteiro_8(){
    executa(produto, 4, 5);                                 // Chama a função 'executa'. Envia a função 'produto' (definida no bloco anterior) e os números 4 e 5
}


int main(){
    ponteiro_7();
return 0;
}