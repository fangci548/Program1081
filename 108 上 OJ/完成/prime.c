#include<stdio.h>

int main(){

    int a,b,i,ans,n,j;

    scanf("%d",&n);

    for (j = 1;j <= n; j++){

        scanf("%d",&a);

        if (a == 0||a == 1||a<=0)
            printf("X\n");

        else if (a == 2)
            printf("PRIME\n");

        else if (a % 2 == 0&& a !=2)
            printf("COMPOSITE\n");
        else{

            printf("%d",a);
            for (i = 2;i*i <= a;i++){

                if (a%i == 0){
                    ans = 1;
                    break;
                }

                else
                    ans = 2;
            }

            if(ans == 1)
                printf("COMPOSITE\n");
            else if (ans == 2)
                printf("PRIME\n");


    }




    }







}
