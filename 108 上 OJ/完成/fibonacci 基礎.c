#include<stdio.h>

int main(){
    int a,b,i,c,d,fi,n,j;


    scanf("%d",&n);

    for (j = 1;j <= n;j++){

        scanf("%d",&c);

        if (c == 0)
            printf("%c\n",'0');
        else if(c == 1)
            printf("%c\n",'1');

        else if (c < 0||c>30)
            printf("ERROR\n");

        else{

            a = 0;
            b = 1;

            for (i = 1;i <= c-2 ;i++){

                d = a;
                a = b;
                b = b+d;
            }

            fi = a+b;
            printf("%d\n",fi);


        }




    }










}
