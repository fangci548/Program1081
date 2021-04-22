#include<stdio.h>

int main(){
    long long int a,b,i,num1,num2,fib;





    do{
        long long int fi = 0;
        scanf("%lld %lld",&num1,&num2);

        if (num1 != 0 || num2 != 0){


            a = 0;
            b = 1;
            fib = 0;

            while(fib <= num2){
                fib = a+b;

                a = b;
                b = fib;


                if (fib >= num1&&fib <= num2){
                    fi = fi+1;
                }
            }

            printf("%lld\n",fi);
        }




    }while(num1!=0||num2!=0);


}

