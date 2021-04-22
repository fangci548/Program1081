#include <stdio.h>

int main(){
    int a,j,k;
    scanf("%d",&a);
    for (int i = 1; i <= (a+1)/2;i++){

        for (int j = (a+1)/2-i;j > 0;j--){
            printf(" ");
        }

        for (int k = 1;k <=(i*2-1);k++){
            printf("*");
        }

        printf("\n");

    }

    for (int i = 1; i <= ((a-1)/2);i++){

        for (int j = 1;j <= i ;j++){
            printf(" ");
        }

        for (int k = (a-(i*2));k >= 1;k--){
            printf("*");
        }

        printf("\n");
    }

}
