#include <stdio.h>

int main(){

    int L,rows,columns,failed;
    int i,j,k,m;
    do{ //��J�﨤�u����
        failed = 0;
        printf("��J�٧ι﨤�u����(3�B5�B7�B9)�G");
        scanf("%d",&L);
        if (L!=3&&L!=5&&L!=7&&L!=9){
            printf("��J���~!\n");
            failed = 1;
        }
    }while(failed == 1);

    do{ //��J���
        failed = 0;
        printf("��J���(2~10)�G");
        scanf("%d",&columns);
        if (columns<2||columns>10){
            printf("��J���~!\n");
            failed = 1;
        }
    }while(failed == 1);

    do{ //��J�C��
        failed = 0;
        printf("��J�C��(2~10)�G");
        scanf("%d",&rows);
        if (rows<2||rows>10){
            printf("��J���~!\n");
            failed = 1;
        }
    }while(failed == 1);


    for (i = 1; i <= rows; i++){

        for (int i = 1; i <= (L+1)/2;i++){  //�٧ΤW�b��

            for(int m = 1;m <= columns; m++){  //���

                for (int j = (L+1)/2-i;j > 0;j--){
                    printf(" ");
                }

                for (int k = 1;k <=(i*2-1);k++){
                    printf("*");
                }

                for (int j = (L+1)/2-i;j > 0;j--){
                    printf(" ");
                }

                printf(" ");

            }

            printf("\n");

        }

        for (int i = 1; i <= ((L-1)/2);i++){  //�٧ΤU�b��

            for(int m = 1;m <= columns; m++){  //���
                for (int j = 1;j <= i ;j++){
                    printf(" ");
                }

                for (int k = (L-(i*2));k >= 1;k--){
                    printf("*");
                }

                for (int j = 1;j <= i ;j++){
                    printf(" ");
                }
                printf(" ");

            }

            printf("\n");
        }

        printf("\n");
    }

}

