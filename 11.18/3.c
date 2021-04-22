#include <stdio.h>

int main(){

    int a,space,i = 0;j = 0,odd[50],even[50],k = 0,N;
    while(scanf("%d%c",&a,&space) != EOF){

            if (space == '\n'){
                N = i;
                i = 0;
                for (j = 0;j < N;j++){
                    if (a[j]%2 == 0){
                        a[j] = even[k];
                        k++;
                    }
                    else{
                        a[j] = odd[k];
                        k++;
                    }
                }

            }
        }



    }
}
