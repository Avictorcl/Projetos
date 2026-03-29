#include<stdio.h>

int main(){

    int tamanho = 5;
    int x[tamanho];
    int i;
    int j;

    for (i = 0; i < tamanho; i++){

        scanf("%d", &x[i]);
        
    }

     for (j = 0; j < tamanho; j++){

        int *ptr;
        ptr = &(x[j]);
        printf("%d\n", *ptr *2);   
        
    }

return 0;
}