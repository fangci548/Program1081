#include<stdio.h>

int main(){

    int num;
    int n = 1;

    scanf("%d",&num);
    while (n<=num){


        if (num%n==0){
            printf("%d ",n);
            }
        n++;
    }

    return 0;
}
