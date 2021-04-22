#include <stdio.h>

int main(){
    long long int a,i;


    scanf("%lld",&a);

    for (i = 0;i < a; i++){
        char d;
        long long int b,c,e;
        long long int f = 1;

        scanf("%lld%c",&b,&d);
        if (d != '!')
            scanf("%lld",&c);

        switch(d){
            case '+':
                printf("%lld\n",c+b);
                break;
            case '-':
                printf("%lld\n",b-c);
                break;
            case '/':
                if (c == 0)
                    printf("ERROR\n");
                else
                printf("%lld\n",b/c);
                break;
            case '*':
                printf("%lld\n",b*c);
                break;
            case '!':
                if (b == 0)
                    printf("1\n");
                else if (b < 0)
                    printf("ERROR\n");
                else{
                    for (e = 1;e <= b;e++){
                    	f*=e;
                }
                printf("%lld\n",f);
                }

                break;

        }
    }
}
