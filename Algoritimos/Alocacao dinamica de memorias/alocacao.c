/* Implemente a função preenche, esboçada abaixo. A fun¸c˜ao deve preencher os elementos de um vetor v de
tamanho n com um certo valor x. Para acessar os elementos do vetor, n˜ao utilize ´ındices, use apenas aritm´etica
de ponteiros.
void preenche (int *v, int n, int x) {
 implementar
}
*/

#include <stdio.h>

void preenche (int *v, int n, int x){
    int i=0;
    for(i=0; i<n; i++){
        *(v+i) = x;
    }
}

int main(){
    int tamanho, valor, *ponteiro;
    printf("informe o tamanho do vetor");
    scanf("%d", &tamanho);
    printf("Informe o valor para preencher o vetor");
    scanf("%d", &valor);
    
    ponteiro = malloc(sizeof(int)*tamanho);
    preenche(ponteiro, tamanho, valor);
    int i=0;
    for(i=0;i<tamanho;i++){
        printf("%d", *(ponteiro+i));
    }
}