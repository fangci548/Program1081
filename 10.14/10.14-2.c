#include <stdio.h>

int main(){
    int a,i,j,k;
    for (i = 1; i <= 9;i++){
        for (j = 1;j <=9 ;j++){
            if (j == 9)
                printf("%d*%d=%2d",j,i,i*j);

            else
                printf("%d*%d=%2d  ",j,i,i*j);
        }

        printf("\n");
    }

}
