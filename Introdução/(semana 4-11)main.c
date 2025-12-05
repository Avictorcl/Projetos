/* 
 Autor:Andrés Victor Callegari Lorenzo (24104611)
 Data:11/09/25
 Descrição do problema: Faça um programa em C para auxiliar no processo de apuração do tráfego em um dos sentidos de uma rodovia. Para cada carro que passar pelo observador, este irá fornecer um código ao sistema de acordo com o tipo do veículo conforme a lista abaixo. Ao final, o sistema deverá apresentar quantos veículos de cada categoria passaram pela rodovia.
Valor informado para cada tipo de veículo:
1 - motocicleta
2 - automóvel;
3 - caminhão;
0 - encerra a leitura e apresenta os totais;

*/

#include <stdio.h>

int m = 0, a = 0, c = 0, x;

int main() 
{

        scanf("%i", &x);

    if(x == 1){

    m++;
    }
    else if(x == 2){

    a++;
    }

    else if(x == 3){

    c++;
    }

    else if(x == 0){
        
        printf("Total de motocicleta: %i\n", m);
        printf("Total de automovel: %i\n", a);
        printf("Total de caminhao: %i\n", c);
        
    return 0;

    }

    while(x != 0){

        scanf("%i", &x);

        if(x == 1){

    m++;
    }
    else if(x == 2){

    a++;
    }

    else if(x == 3){

    c++;
    }

    else if(x == 0){
        
        printf("Total de motocicleta: %i\n", m);
        printf("Total de automovel: %i\n", a);
        printf("Total de caminhao: %i\n", c);
        
    return 0;
    }
    }

    
}