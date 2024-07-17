#include <stdio.h>;
#include <stdlib.h>;

int main(){
    float z = 2.5;
    float *fp;

    fp = &z;
    printf("O conteudo de z %f\n" , *&z);
    printf("O conteudo de fp %f" , *fp);
    return 0;
}
