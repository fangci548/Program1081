#include<stdio.h>

int main(){

    int n;
    int P = 1;

    scanf ("%d",&n);

    for (int i = 2; i*i <= n;i++){
        if(!(n%i)){
           printf("%d\n",i);
           P = 0;
           break;
           }
        }
    if (P)
        printf("Prime\n");



    }

