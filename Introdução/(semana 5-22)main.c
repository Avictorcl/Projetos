    /* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:15/09/25
    Descrição do problema: Faça um programa em C que converte a temperatura de Fahrenheit para Celsius (Celsius = 5.0 * (Fahrenheit - 32)/9). O programa deve ler várias temperaturas e realizar a conversão até que o usuário informe o valor -1 para encerrar o programa."
    */

#include <stdio.h>

float c = 0, f = 0;

int main() 
{   
    printf("Informe a temperatura em Fahrenheit para conversão. Digite -1 para sair.\n");
    
while(f != -1){

    scanf("%f", &f);
    c = 5 * (f - 32)/9;
    printf("%f\n", c);
}

    return 0;
}