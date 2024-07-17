#include <stdio.h>

 int soma(int x ,int y){
        int z = x + y;

    printf("Valor de Z: %d" , z);
    return z;
    }

int main(){
    //Função de passagem por Valor

    int a = 10;
    int b = 20;
    int c;

    c  = soma(a, b);

return 0;
}
