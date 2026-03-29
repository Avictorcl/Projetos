/*
5. Escreva um programa que leia dois vetores de inteiros com tamanhos definidos pelo utilizador. Escreva uma
fun¸c˜ao que receba como parˆametros os vetores lidos e os respectivos tamanhos e que gere um novo vetor que
corresponde `a jun¸c˜ao dos vetores passados como parˆametro (ver exemplo).
    
    N´umero de elementos do vetor A: 3
    Informe o 1o elemento: 1
    Informe o 2o elemento: 3
    Informe o 3o elemento: 5
    N´umero de elementos do vetor B: 2
    Informe o 1o elemento: 2
    Informe o 2o elemento: 6
    Resultado: [13526]
*/

void junta_vetores(int *vA, int tA, int *vB, int tB){
    int *novo;
    int i, tamanho = tA + tB;
    novo = malloc(sizeof(int)*tamanho);
    for(i=0;i<tamanho; i++){
        if(i<tA){
            *(novo+i) = (vA+i);
        }
        else
            *(novo+i) = *(vB+i-tA);
    return novo;
    }
}

int main(){
    int i, tmnA, tmnB, *vetorA, *vetorB, *vetorC;
    printf("Tamanho do vetor A");
    scanf("%d", &tmnA);
    vetorA = malloc(sizeof(int)*tmnA);
    printf("Tamanho do vetor B");
    scanf("%d", &tmnB);
    vetorB = malloc(sizeof(int)*tmnB);

    for(i=0; i< tmnA; i++){
        printf("Vetor A - %do elemento", i+1);
        scanf("%d", vetorA+i);
    }

        for(i=0; i< tmnB; i++){
        printf("Vetor B - %do elemento", i+1);
        scanf("%d", vetorB+i);
    }
    
    vetorC = junta_vetores(vetorA, tmnA, vetorB, tmnB);
    for(i=0; i<tmnA + tmnB; i++){
        printf("%d", *(vetorC+i));
    }
}