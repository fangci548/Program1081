#include<stdio.h>
#include<string.h>

int fib(int m){
    if (m <= 1)
        return m;
    else
        return fib(m-1)+fib(m-2);
}

int main(){
    int m;
    while(scanf("%d",&m) != EOF){
        printf("%d\n",fib(m));
    }


}
