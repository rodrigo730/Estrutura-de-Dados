#include <stdio.h>

void troca(int *x  , int *y, int *a , int*b ){
    int aux = *x;
    *x = *y;
    *y = aux;

    int aux2 = *a;
     *a = *b;
     *b = aux2;
}

int main(){

int a = 10;
int b = 20;
int *p1 = &a;
int *p2 = &b;

printf("Endereco: %p \n O Valor de A: %d\n", &a, a);
printf("Endereco: %p \n O Valor de B: %d\n\n", &b, b);

printf("Endereco: %p \n O Valor de p1: %d\n", &p1, p1);
printf("Endereco: %p \n O Valor de p2: %d\n\n", &p2, p2);

troca(&a, &b, &p1 ,&p2);


printf("Endereco: %p \n O Valor de A: %d\n", &a, a);
printf("Endereco: %p \n O Valor de B: %d\n\n", &b, b);


printf("Endereco: %p \n O Valor de p1: %d\n", &p1, p1);
printf("Endereco: %p \n O Valor de p2: %d\n\n", &p2, p2);

return 0;
}
