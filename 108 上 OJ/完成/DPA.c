#include <stdio.h>

int main (){
    unsigned long long n,i,j;
    int t,add;
    unsigned long long sum;

    scanf("%d",&t);

    for ( j = 1;j <= t;j++){

        sum = 0;

        scanf("%llu",&n);

        if (n % 2 != 0 ){
            add = 2;
        }
        else{
            add = 1;
        }

        for (i = 1;i*i <= n;i += add){

            if(n%i == 0){
                sum += i;//sum = sum+i

                if ((n/i)!=i){
                    sum += n/i; //����@�Ӧ]�� �i�H���t�@�ӹ�����
                }

            }
        }

        sum = sum - n;

        if (sum > n){
            printf("abundant\n");
        }

        else if (sum < n){
            printf("deficient\n");
        }

        else {
            printf("perfect\n");
        }


    }

    return 0;


}
