    /* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:15/09/25
    Descrição do problema: Em uma eleição presidencial há três candidatos representados pelos códigos 1, 2 e 3 respectivamente.
    O código 4 representa voto nulo e o código 5 representa voto em branco. 
    Escreva um programa em C que leia os votos dos eleitores e calcule a quantidade de votos de cada candidato, 
    bem como a quantidade de votos nulos e em branco e a quantidade total de votos.
    Ao digitar a opção 0, o algoritmo é encerrado e os resultados são exibidos.

    Para que a avaliação automatizada funcione, siga as instruções abaixo:

        para ler os votos apresente a mensagem abaixo e na sequencia leia os valores de cada voto usando apenas um scanf para cada valor.
    printf("Informe os votos digitando um valor de 1 a 5 em cada linha. Informe 0 (zero) para finalizar e ver os resultados.\n");
    */

    #include <stdio.h>

    int n = -1, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, t = 0;

    int main() 
    {
            printf("Informe os votos digitando um valor de 1 a 5 em cada linha. Informe 0 (zero) para finalizar e ver os resultados.\n");

        while (n != 0) {

            scanf("%i", &n);

            if(n == 1){
            n1++;
            }
            else if(n == 2){
            n2++;
            }
            else if(n == 3){
            n3++;
            }
            else if(n == 4){
            n4++;
            }
            else if(n == 5){
            n5++;
            }
            else if (n == 0){

            t = n1 + n2 + n3 + n4 + n5;
                printf("Votos candidato 1: %i\n", n1);
                printf("Votos candidato 2: %i\n", n2);
                printf("Votos candidato 3: %i\n", n3);
                printf("Votos nulos: %i\n", n4);
                printf("Votos brancos: 2: %i\n", n5);
                printf("Total de votos: %i", t);
                return 0;
            }
        }
        
        

    }