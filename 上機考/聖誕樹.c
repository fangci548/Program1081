#include <stdio.h>

int main(){

    int N,H,i,j;

    scanf("%d%d",&N,&H);

    if ((N < 2||N > 5)&&(H < 3||H > 6)){
        printf("ERROR");
        return 0;
    }


    for (i = 1;i <= H;i++){   //第一層

        for(int m = 0; m < H+(2*(N-1))-i ; m++){

            printf(" ");
        }
        for(int m = 0;m < i*2-1;m++){
            printf("#");
        }
        printf("\n");
    }

    for(j = 1;j < N;j++){  //第二層以後

        for(i = 2;i < H+2*j+1;i++){

            for (int m = 0;m < H+(2*(N-1))-i;m++){
                printf(" ");
            }
            for(int m = 3;m <= i*2+1;m++){
                printf("#");
            }
            printf("\n");
        }




    }


    for(int m = 1;m <= 5;m++){

        for (int k = 1;k < H+(2*(N-1))-1;k++){
            printf(" ");
        }

        for (int k = 1;k <= 3;k++){
            printf("|");
        }

        printf("\n");

    }


}
