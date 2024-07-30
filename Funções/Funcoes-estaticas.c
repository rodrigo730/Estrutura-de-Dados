#include <stdio.h>

void valor(int v[], int n){
printf("v =[%d] %p, v=[%d] %p",  v, &v, n , &n);


}

int main(){


int v[2] = {0,1};

valor(v[0] , v[1]);


return 0;


}
