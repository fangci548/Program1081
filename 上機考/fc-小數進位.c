#include<stdio.h>

int main(){

    double f,a;
    int k,i,c,j,d;

    scanf("%d",&d);

    for(j = 1; j<= d;j++){

        scanf("%lf %d",&f,&k);

        printf("0.");

        for(i = 1;i <= k; i++){

            f = f*2;
            a = f;
            c = (int)a;



            if (f >= 1)
                f = f-1;
            printf("%d",c);

    }

    printf("\n");





    }








}