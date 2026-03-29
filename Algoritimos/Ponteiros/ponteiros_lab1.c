#include<stdio.h>

int main(){

    int idade = 25;
    float altura = 1.87;
    char nome = 'A';
    int *p1;
    float *p2;
    char *p3;

    p1 = &idade;
    p2 = &altura;
    p3 = &nome;

    printf("%d, %.2f, %c\n", *p1, *p2, *p3);

    *p1 = 30;
    *p2 = 1.90;
    *p3 = 'G';

    printf("%d, %.2f, %c", *p1, *p2, *p3);

return 0;

} 