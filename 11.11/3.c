#include <stdio.h>
#include <string.h>

int main()
{


    int n=1,sum,H,k,j,count = 0,i;
    int h[100];

    while(n){

        scanf("%d",&n);
        if (n == 0)
            break;

        sum = 0;

        for (i = 0;i < n;i++){

            scanf("%d ",&h[i]);
            sum+=h[i];

        }

        H = sum/n;
        k = 0;
        for (i = 0;i < n;i++){

            if (h[i]>H){
                k += h[i]-H;
            }

        }

        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++count,k);


    }



}
