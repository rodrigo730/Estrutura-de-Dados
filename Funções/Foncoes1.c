#include <stdio.h>

void troca(int *x  , int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){

int a = 10;
int b = 20;

printf("Endereco: %p \n" , "O Valor de A: %d\n", &a, a);
printf("Endereco: %p \n" , "O Valor de B: %d\n\n", &b, b);

troca(&a, &b);

printf("Endereco: %p \n", &a , "O Valor de A: %d\n", &a, a);
printf("Endereco: %p \n", &a , "O Valor de B: %d\n\n", &b, b );


return 0;
}
