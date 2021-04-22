#include <stdio.h>

int main(){
    long long int N,i,x;
    int w = 1;

    scanf("%lld",&N);

    do{
        if (N>=1000000&&N<=10000)
            x = 10;
        else if(N<=1000000000000&&N>=1000000)
            x = 1000;
        else
            x = 1;
        for (i = x;((i*(i-3))/2) <= N;i++){

        }
        printf("Case %d: %lld\n",w,i);
        scanf("%lld",&N);
        w++;

    }while (N != 0);


}
