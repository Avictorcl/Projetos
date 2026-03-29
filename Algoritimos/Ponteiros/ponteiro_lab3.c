#include<stdio.h>

void troca(float *a, float *b){

    *a = (*a) *10;
    *b = (*b) *5;

}   

int main(){

    float a;
    float b;

    scanf("%f", &a);
    scanf("%f", &b);

    troca(&a, &b);
    
    printf("%.2f, %.2f\n", a, b);
}

