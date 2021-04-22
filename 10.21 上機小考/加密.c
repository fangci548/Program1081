#include <stdio.h>

int main(){
        long long int b,c;
        int i,j,p;
        char a;
        scanf("%d",&p);

        for (j = 1;j<= p;j++){
            getchar();

             scanf("%c",&a);

            (int)a;
            b = (a+25)*37;

            for (i = 0;i < 5;i++){

                c = (b % 94) + 33;

                (char)c;

                printf("%c",c);

                b = (b+25)*37;
            }
             printf("\n");
        }


        }
