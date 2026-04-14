

#include <stdio.h>
#include <stdlib.h>

/*
? Alocação contínua (vetores):
    -> Os dados são gravados em um bloco fechado e sequencial na RAM. A vantagem é o acesso instantâneo pela matemática de índices.
       A desvantagem é que, para inserir um valor no meio, o senhor precisa "empurrar" todos os vizinhos para o lado para abrir espaço.

? Alocação não contínua (Listas encadeadas):
    -> Os dados são espalhados livremente pela RAM. Para conectá-los, cada elemento precisa guardar um mapa (ponteiro) apontando para a próxima casa.
       A vantagem é que inserir ou remover dados exige apenas "redesenhar o mapa", sem mover nenhum outro vizinho.
*/

//*=============================//
//*   Definição de estruturas   //
//*=============================//

void lista_1(){
//*  Lista encadeada simples
    typedef struct NoSimples{
        int value;      // O dado armazenado
        struct NoSimples *next;     // O ponteiro para o próximo elemento
    } Nosimples;

//*  Lista encadeada dupla
typedef struct NoDuplo{
    int value;
    struct NoDuplo *prev;       // O elemento aponta para o item anterior
    struct NoDuplo *next;       // O elemento aponta para o próximo item
} NoDuplo;
}

//*============================//
//*     Módulos de estudo      //
//*============================//

//?     Lista em vetores (alocação contínua)
void lista_2(){
    printf("--- Lista em vetor ---z\n");

    int lista[5] = {10, 20, 40};     //Inicializamos um vetor onde os itens devem ficar agrupados
    int tamanho = 3;

// Para inserirmos o '30' no índice 2, precisamos mover o '40' para frente (isso custa alto processamento para grandes listas)
    lista[3] = lista[2];     // Move o '40' para o índice 3
    lista[2] = 30;      // Insere '30' no índice 2
    tamanho++;
    
    for(int i = 0; i < tamanho; i++){
        printf("Vetor[%d]: %d\n", i, lista[i]);
    }
}

//?     Lista encadeada (alocação não contínua)
void lista_3(){
    printf("--- Lista encadeada simples ---\n");

// O sistema procura espaços livres aleatórios na RAM
    typedef struct NoSimples{
        int value;
        struct NoSimples *next
    } NoSimples;

    typedef struct NoDuplo{
        int value;
        struct NoDuplo *prev;
        struct NoDuplo *next;
    } NoDuplo;

    NoSimples *L1 = malloc(sizeof(NoSimples));
    NoSimples *L2 = malloc(sizeof(NoSimples));
    NoSimples *L3 = malloc(sizeof(NoSimples));

// Injetando os valores
    L1->value = 10;
    L2->value = 20;
    L3->value = 30;

// Desenhando o mapa (encadeamento). O L1 aponta pro L2, que aponta pro L3
    L1->next = L2;
    L2->next = L3;
    L3->next = NULL;

// Navegando usando o mapa
    NoSimples *ptr = L1;        // Começando pela cabeça 'L1'
    while(ptr != NULL){
        printf("Dado: %d\n", ptr->value);
        ptr = ptr->next;        // Viaja para o próximo endereço
    }

free(L1);
free(L2);
free(L3);
}

//?     Listas duplamente encadeadas
void lista_4(){
    printf("--- Listas duplamente encadeadas ---\n");

    typedef struct NoDuplo{
        int value;
        struct NoDuplo *prev;
        struct NoDuplo *next;
    } NoDuplo;

// Agora cada nó é pesado, pois precisa de dois ponteiros de navegação
    NoDuplo *L1 = malloc(sizeof(NoDuplo));
    NoDuplo *L2 = malloc(sizeof(NoDuplo));

    L1->value = 88;
    L2->value = 99;

// Encadeamento duplo (ida e volta)
    L1->prev = NULL;
    L1->next = L2;

    L2->prev = L1;
    L2->next = NULL;

    NoDuplo *ptr_fim = L2;

    printf("Lendo de tras pra frente: %d, depois: %d\n", ptr_fim->value, ptr_fim->prev->value);

    free(L1);
    free(L2);
}

//?     Listas circulares:
void lista_5(){
    printf("--- Listas circulares ---\n");

    typedef struct NoSimples{
        int value;
        struct NoSimples *next;
    } NoSimples;

    NoSimples *L1 = (NoSimples *)malloc(sizeof(NoSimples));
    NoSimples *L2 = (NoSimples *)malloc(sizeof(NoSimples));
    int i;      //variável extraída do for

    L1->value = 1;
    L2->value = 2;

    L1->next = L2;
    L2->next = L1;

    NoSimples *ptr = L1;
    for(i = 0; i < 4; i++){
        printf("Rodando em circulo: %d\n", ptr->value);
        ptr = ptr->next;
    }
    free(L1);
    free(L2);
}


int main(){
    lista_();
return 0;
}