#include <stdio.h>

int main(){

    int n,a,f,j;

    scanf("%d\n\n",&n);

    for (j = 1;j <= n ;j++){ //幾個測資

        scanf("%d\n",&a);
        scanf("%d",&f);

        for (int i = 1; i <= f;i++){

            for (int m = 1;m <= a; m++){  //上半部

                for (int k = 1;k <= a-m; k++){
                    printf(" ");

                }

                for (int k = 1;k <= m;k++){

                    printf("%d",m);

                }

                printf("\n");

            }

            for (int m = 1;m <= a-1;m++){

                for (int k = 1;k <= m; k++){

                    printf(" ");

                }

                for (int k = 1;k <= (a-m); k++){

                    printf("%d",(a-m));

                }

                printf("\n");
            }

            printf("\n");

        }


    }


}
