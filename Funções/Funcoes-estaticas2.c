#include <stdio.h>
#include <stdlib.h>
void valor(int v[], int n){

for(int i = 0 ; i < n; i++){

printf("v =[%d] %p\n, v=[%d] %d\n" , i, &v[i], i ,v[i]);
}
}

int main(){

puts("########## VETOR ESTATICO");

int v[2] = {0,1};

valor (v, 2);
puts("########## VETOR DINAMICO");

int *vh = calloc(5, sizeof(int));

for(int i; i <5; i++){
    vh [i] = i * 10;
}

valor (vh, 5);

free(vh);
vh = NULL;
return 0;
}
