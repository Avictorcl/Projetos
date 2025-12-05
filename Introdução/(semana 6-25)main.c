/* 
    Autor:Andrés Victor Callegari Lorenzo (24104611)
    Data:07/10/25
    Descrição do problema: Faça um programa para apresentar todos os números primos em um intervalo de a até b. Os valores do intervalo [a, b] serão informados pelo usuário (não consideramos 1 como número primo).

*/

#include <stdio.h>

int a=0, b=0;

int main() 
{   
    printf("Informe os valores de um intervalo para análises dos números primos:\n");
    scanf("%i", &a);
    scanf("%i", &b);
    printf("Números primos do intervalo:\n");
for(int i=a; i<=b; i++){
int d=0;

 for(int j=1; j<=b; j++){
  if(i%j==0){
d++;
  }
 }
 if(d==2){
    printf("%i", i);
    printf("\n");
 }
}

return 0;
}