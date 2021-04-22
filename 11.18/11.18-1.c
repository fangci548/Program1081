#include <stdio.h>
#include <string.h>

int main(){

    int a[100][100];
    int i,j,fail = 0,failed = 0;
    char m;

    while (failed == 0){

        for (i = 0 ;i < 100;i++){
            fail = 0;
            while (fail == 0){
                for(j = 0;j < 100;j++){
                    if(scanf("%d%c",&a[i][j],&m) != EOF){
                        if (m == '\n'){
                            fail = 1;
                        }
                    }
                    else{
                        failed = 1;
                        fail = 1;
                    }
                }
            }
        }
        for (j = 0;j < i;j++){
            for (i = 0;i < j;i++){
                printf("%d ",a[j][i]);
            }
        }
    }




}
