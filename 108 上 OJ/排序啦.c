#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num1,num2,num3,tmp = 0,tmpp,i,j;
    int first[100000] = {0},second[100000] = {0},third[100000] = {0},tal[300000] = {0};

    while(scanf("%d",&num1) != EOF){
        tmp = 0;
        for(i = 0;i < num1;i++){
            scanf("%d",&first[i]);
        }
        for(i = 0;i < num1;i++){
            tal[i] = first[i];
        }
        tmp = num1;

        scanf("%d",&num2);
        for(i = 0;i < num2;i++){
            scanf("%d",&second[i]);
        }
        for(i = 0;i < num2;i++){
            tal[tmp+i] = second[i];

        }
        tmp += num2;

        scanf("%d",&num3);
        for(i = 0;i < num3;i++){
            scanf("%d",&third[i]);
        }
        for(i = 0;i < num3;i++){
            tal[tmp+i] = third[i];
        }
        tmp += num3;

        for(i = 0;i < tmp;i++){
            for(j = 0;j < tmp-i-1;j++){
                if(tal[j] > tal[j+1]){
                    tmpp = tal[j];
                    tal[j] = tal[j+1];
                    tal[j+1] = tmpp;
                }
            }
        }

        for(i = 0;i < tmp;i++){
            if(i < tmp - 1)
                printf("%d ",tal[i]);
            else
                printf("%d\n",tal[i]);
        }
    }
}
