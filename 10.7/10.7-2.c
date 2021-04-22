#include<stdio.h>

int main(){

    int n,m,sum=0;
    scanf("%d %d",&n,&m);

    for (sum=0; n <= m; n++ ){
        sum+=n;
    }
    printf("%d",sum);


    return 0;
    }


