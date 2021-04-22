#include <stdio.h>

int main(){

    int q[100][100],w[100][100],ans[100][100],z,i = 0,j = 0,k = 0,m = 0,fail = 0,q_i,q_j,w_i,w_j;

    while(fail == 0){
        scanf("%d%c",&q[i][j],&z);
        if (z == '\n'){
            q_j = j+1;
            j = 0;
            i++;
        }
        else if(z == '#'){
            q_i = i;
            fail = 1;
        }
        else
            j++;

    }
    fail = 0;
    i = 0;
    j = 0;
    while(scanf("%d%c",&w[i][j],&z) != EOF){
        if (z == '\n'){
            w_j = j+1;
            j = 0;
            i++;
        }
        else
            j++;
    }
    w_i = i;

//    for(int i = 0;i < q_i;i++){
//        for(int j = 0;j < q_j;j++){
//            printf("%d ",q[i][j]);
//        }
//        printf("\n");
//    }
//    for(int i = 0;i < w_i;i++){
//        for(int j = 0;j < w_j;j++){
//            printf("%d ",w[i][j]);
//        }
//        printf("\n");
//    }


    for(int i = 0;i < q_i;i++){
        for (int j = 0;j < w_j;j ++){
            for (int m = 0;m < q_j;m++){

                ans[i][j] += q[i][m] * w[m][j];
            }
        }
    }

    for(int i = 0;i < q_i;i++){
        for (int j = 0;j < w_j;j++){
            printf("%d",ans[i][j]);
            if (j < w_j -1)
                printf(" ");
        }
        printf("\n");
    }




}
