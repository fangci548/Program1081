#include<stdio.h>

int main(){

    char n;
    while(1){
        scanf ("%c",&n);
        if (n == '0')
            break;

        else if (n>=65&&n<=90)
            printf("lower is %c\n",n+32);

        else if (n>=97&&n<=122)
            printf("upper is %c\n",n-32);
    }

}

