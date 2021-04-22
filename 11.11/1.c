#include <stdio.h>

int main (){

    unsigned long long int a[94]={0};
    unsigned long long int n,i,h;

    while(scanf("%llu",&n)!=-1){

        a[0] = 0;
        a[1] = 1;

        for(i = 2;i <= n;i++){
            a[i] = a[i-2]+a[i-1];
        }

        printf("%llu\n",a[n]);


    }



}
