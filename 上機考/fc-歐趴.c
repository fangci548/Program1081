#include<stdio.h>

int main(){

    int a,b,i;
    char c = 0b11111111;
  

    scanf("%d",&a);

    for(i = 1;i <= a;i++){

        scanf("%d",&b);  //要修改的學期
        switch (b){  //更改b學期的位元

            case 1:
                c&0b11111110;
                break;
            case 2:
                c&0b11111101;
                break;
            case 3:
                c&0b11111011;
                break;
            case 4:
                c&0b11110111;
                break;
            case 5:
                c&0b11101111;
                break;
            case 6:
                c&0b11011111;
                break;
            case 7:
                c&0b10111111;
                break;
            case 8:
                c&0b01111111;
                break;



        }

        printf("%d\n",c);





        }



    }