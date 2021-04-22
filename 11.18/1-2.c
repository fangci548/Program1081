#include <stdio.h>
#include <string.h>

int main(){

    int a[100][100];
    int i = 0,j = 0,n,b;
    char m;

    while (scanf("%d%c",&a[i][j],&m) != EOF){

        if (m == '\n'){
            b = j;
            j = 0;
            i++;
        }else
        j++;
    }

    n = i;
    for (j = 0;j <= b;j++){
        for (i = 0;i < n;i++){
            printf("%d",a[i][j]);
            if (i < n-1)
                printf("*");
        }
        printf("\n");
    }


}


