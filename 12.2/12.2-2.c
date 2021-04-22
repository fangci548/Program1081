#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int m,n;
    m = rand() % 100+1;
    while(scanf("%d",&n) != m){
        if (n > 100||n < 1)
            printf("OUT OF RANGE\n");
        else if(n < m)
            printf("TOO SMALL\n");
        else if (n > m)
            printf("TOO BIG\n");
        else{
            printf("YOU WIN\n");
            break;
        }

    }


}
