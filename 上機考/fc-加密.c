#include<stdio.h>

int main(){

    int n,yes,a,b,c,d,a1,b1,c1,d1;

    do{
        scanf("%d %d",&yes,&n);

        if (yes == 0&&n != 0){

            if(n<1000 && n >= 100)
                a = 0;
            else if (n<=99 && n>= 10){

                a = 0;
                b = 0;

            }
            else if (n >= 0 && n < 10){

                a = 0;
                b = 0;
                c = 0;
            }


            a = (int)(n/10);
            a = a%10;


            b = (int)(n/1);
            b = b%10;


            c = (int)(n/1000);
            c = c%10;


            d = (int)(n/100);
            d = d%10;



            a = (a+6)%10;
            b = (b+6)%10;
            c = (c+6)%10;
            d = (d+6)%10;

            printf("%d%d%d%d\n",a,b,c,d);

        }

        else if(yes == 1){


            if(n<1000 && n >= 100)
                a = 0;
            else if (n<=99 && n>= 10){

                a = 0;
                b = 0;

            }
            else if (n >= 0 && n < 10){

                a = 0;
                b = 0;
                c = 0;
            }

            a = (int)(n/10);
            a = a%10;


            b = (int)(n/1);
            b = b%10;


            c = (int)(n/1000);
            c = c%10;


            d = (int)(n/100);
            d = d%10;

            a1 = a-6;
            b1 = b-6;
            c1 = c-6;
            d1 = d-6;

            if (a1>=0)
                a = a1;
            else
                a = 10+a1;

            if (b1>=0)
                b = b1;
            else
                b = 10+b1;

            if (c1>=0)
                c = c1;
            else
                c = 10+c1;

            if (d1>=0)
                d = d1;
            else
                d = 10+d1;

            printf("%d%d%d%d\n",a,b,c,d);



        }
        else if (yes == 0&& n == 0)
            return 0;


    } while(yes != 0|| n != 0);











    }