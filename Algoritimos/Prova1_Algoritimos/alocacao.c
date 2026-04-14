/*
?Alocação dinâmica de memória:
*   -> Estática:
        -> As variáveis são criadas uma vez e duram até o programa fechar (ex: static int i = 0;)
*   -> Automática: 
        -> São as variáveis locais que nascem e morrem dentro das funções. Elas possuem dimensão fixa e ocupam uma área invariável.
*   -> Dinâmica:
        -> A memória é pedida "sob demanda" ao sistema operacional utilizando funções específicas da biblioteca <stdlib.h>.
           você pede a memória, usa e, obrigatoriamente, devolve.
*/

/*
  ========================================================================
 *               A REAL DIFERENÇA ENTRE MALLOC E CALLOC
  ========================================================================
  Ambas as funções conseguem alocar a exata mesma quantidade de memória.
  A diferença real se resume a dois fatores: LIMPEZA e SINTAXE.
 
  1. LIMPEZA DOS DADOS (A diferença crucial)
  - malloc: Entrega a memória "suja". O que quer que estivesse escrito
  naquele espaço da RAM antes (lixo de memória) continua lá.
  É mais rápida, mas exige cuidado extra.
  - calloc: Entrega a memória "limpa". Ele varre o bloco alocado e
  inicializa todos os bits com o valor '0' antes de entregar.
 
  2. SINTAXE (A forma de pedir)
  - malloc exige 1 argumento: o tamanho total em bytes.
  Ex: malloc(3 * sizeof(int));
  - calloc exige 2 argumentos: a quantidade de elementos e o tamanho.
  Ex: calloc(3, sizeof(int));
  ========================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//*=============================//
//*       Malloc e free         //
//*=============================//
//! Objetivo: Alocar um bloco de memória. Não inicializa os dados (contém "lixo").
void alocacao_1(){
    printf("--- MALLOC E FREE ---\n");

    int *p; 

    p = malloc(sizeof(int));    // Malloc aloca um bloco de bytes do tamanho '(sizeof(int))' (tamanho de um inteiro)

    if(p == NULL){
        printf("Erro: Sem memória disponível!\n");
        return;
    }

    printf("Valor alocado via malloc: %d\n", *p);
    free(p);                    // Liberamos a memória quando não precisamos mais dela

    p = NULL;
}

//*=============================//
//*       Função Calloc         //
//*=============================//
//! Objetivo: Aloca memória para um vetor e zera todos os espaços automaticamente.
void alocacao_2(){
    printf("--- CALLOC ---\n");

    // calloc inicializa cada elemento com o valor '0'
    // Argumentos: número de elementos, tamanho de cada elemento
    // Aqui pedimos espaço para 3 inteiros

    int *vetor = calloc(3, sizeof(int));

    if(vetor == NULL){
        return;
    }

    vetor[1] = 5; //modificamos apenas a posição 1

    // Como usamos o calloc, as posições 0 e 2 já nasceram valendo 0   
    for(int i = 0; i < 3; i++){
        printf("vetor[%d]: %d\n", i, vetor[i]);
    }

free(vetor);
}

//*=============================//
//*       Função Realloc        //
//*=============================//
//! Objetivo: Redimensionar (aumentar ou diminuir) um bloco de memória já existente.
void alocacao_3(){
    printf("--- REALLOC ---\n");

    char *s = malloc(80);

    if (s == NULL){
    return;
    }

    strcpy(s, "texto pequeno.");
    printf("Texto original %s\n", s);
    
    s = realloc(s, 20);
    strcpy(s, "Bom dia!");
    printf("Texto após o REALLOC: %s", s);

free(s);
}

//*==================================//
//*   Alocação de vetores dinâmicos  //
//*==================================//
//! Objetivo: Criar vetores onde o tamanho pode ser definido em tempo de execução.
void alocacao_4(){
    printf("--- Vetores Dinâmicos ---\n");

    int tamanho = 4;  // Imagine que este valor veio de um 'scanf' digitado pelo usuario
    int *p = malloc(sizeof(int)* tamanho);  //Criamos um vetor do tamanho que o usuario pediu
    if (p == NULL){
        return;
    }

    for(int i = 0; i < tamanho; i++){
        p[i] = i * 10;

    }

    for(int i = 0; i < tamanho; i++){
        printf("Posição %d vale: %d", i, p[i]);
    }
free(p);
}

//*==============================================================//
//*   ALOCAÇÃO DE MATRIZES DINÂMICAS (PONTEIRO PARA PONTEIRO)    //
//*==============================================================//
//! Objetivo: Construir uma matriz bidimensional usando um vetor de ponteiros.
void alocacao_5(){
    printf("--- Matrizes dinâmicas (Ponteiro duplo) ---\n");
    
    int nlinhas = 3, ncolunas = 4;
    int **A;

    for(int i = 0; i < nlinhas; i++){   // Uma matriz é um vetor de ponteiros para linhas. Logo usamos um ponteiro duplo '**A'
        A[i] = malloc(ncolunas * sizeof(int));  // Para cada linha alocar o vetor de colunas
    }

    A[1][2] = 25;   // Acessando a matriz normalmente
    printf("Valor armazenado na linha 1, coluna 2: %d\n", A[1][2]);

    for(int i = 0; i < nlinhas; i++){   // Limpeza obrigatoria para evitar Memory Leak
        free (A[i]);    // Libera cada linha
    }
free (A);   //Libera o vetor de ponteiros
}



int main(){
    alocacao_1();
return 0;
}