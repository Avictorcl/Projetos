#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() { 

    FILE *f;
    
    f = fopen("manipulacao_arquivo.txt", "w");


    if (f == NULL) {
        printf("Erro ao abrir o arquivo! \n"); 
        system("pause");
        exit(1); 
    }

    char texto[20] = "Leitura de arquivo";
    size_t i;

    for (i = 0; i < strlen(texto); i++) {
        fputc(texto[i], f);
    }
    fclose(f);
    return 0;
}