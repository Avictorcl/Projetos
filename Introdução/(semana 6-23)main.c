    /* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:26/09/25
    Descrição do problema: Faça um programa em C que converte a temperatura de Fahrenheit para Celsius (Celsius = 5.0 * (Fahrenheit - 32)/9). O programa deve ler várias temperaturas e realizar a conversão até que o usuário informe o valor -1 para encerrar o programa."
    */

#include <stdio.h>

int i = 0,c, v[10], n_dentro, n_fora;

int main() 
{   
    //receber 10 números (criar um vetor com 10 espaços)
        printf("Informe 10 números:\n");
    for(i=0; i<10; i++){
        scanf("%i", &c);
        v[i]=c;
    //contar quantos deles estão dentro do intervalo de 10 a 20
    
    if(v[i] >= 10){
        if(v[i] <= 20){
            n_dentro++;
        } else {
            n_fora++;
        }
    } else {
        n_fora++;
    }
    //contar quantos dele não estão no intervalo de 10 a 20
    
    }
    

    printf("Vezes que foram informados números dentro da faixa de [10-20]: %i\n", n_dentro);
    printf("Vezes que foram informados números fora da faixa de [10-20]: %i\n", n_fora);

    return 0;
}