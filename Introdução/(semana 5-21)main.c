    /* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:15/09/25
    Descrição do problema: Faça um programa em C que apresenta a tabuada (de 0 até o 10) de um número inteiro informado pelo usuário usando uma estrutura de repetição.
    */

    #include <stdio.h>

    int n = 0, m = 0, r = 0;

    int main() 
    {   
            printf("Informe numero para apresentação da tabuada:\n");
            scanf("%i", &n);

        for(m = 0; m <= 10; m++){

        r = n*m;
            printf("%i x %i = % i\n", n, m, r);
            }
        return 0;
    }