#include <stdio.h>;
#include <stdlib.h>;


int main(){
int a = 10;
int *p1 = &a;
int **p2 = &p1;


 printf("O endereco de a e: %p,O Valor de a e: %d \n", &a,  a);
 printf("O endereco de p1 e: %p,  O Valor de p1 e: %p, *p1 = %d ", &p1, p1, *p1);
 printf("O endereco de p2 e: %p, O Valor de p2 e: %p, **p2 =  %p , **p2 = %d\n", &p2, p2, *p2, **p2 );

 **p2 = 99;

 printf("O endereco de a e: %p ,O Valor de a e: %d \n", &a,  a);
 printf("O endereco de p1 e: %p ,  O Valor de p1 e: %p , *p1 = %d ", &p1,  p1, *p1);
 printf("O endereco de p2 e: %p , O Valor de p2 e: %p , **p2 =  %p , **p2 = %d\n ", &p2,  p2, *p2, **p2 );


return 0;
}
