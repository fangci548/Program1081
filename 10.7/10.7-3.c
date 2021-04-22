#include<stdio.h>

int main(){

    int n,i,temp;

    scanf ("%d",&n);

    for (i = 7;i >= 0; i--){
        temp = n >> i;
        printf("%d", temp & 1);
    }



    }


