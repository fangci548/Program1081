#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define max 301

void z035j03(char str[max]){//
    int i,j,longg;
    char tmp[max];
    for(i = 0;i < max;i++){
        if(str[i] == '\0'){
            longg = i;
            break;
        }
    }

    for(i = 0;i < longg/2;i++){
        tmp[i] = str[i];
        str[i] = str[longg - i - 1];
        str[longg - i - 1] = tmp[i];
    }
    for(i = longg;i < max;i++){
        str[i] = '0';
    }
}

void plus(int length,char str1[max],char str2[max],char sum[max],int longg){
    int i,tmp[max] = {0};
    for(i = 0;i < length+1;i++){
            tmp[i] += (str1[i]-48) + (str2[i]-48);

            if(tmp[i] >= 10){
                tmp[i+1]+=1;
                tmp[i]-=10;
            }
            //printf("%d ",tmp[i+1]);
            sum[i] = tmp[i] + 48;
            //printf("%c ",sum[i]);

    }
        //printf("%d")
    if(sum[length] == '0')
            longg = length;
    else longg = length+1;
}



int main(){

    char sum[max] = {0},str1[max],str2[max];
    int length,i,longg = 0;

    while(scanf("%s + %s",&str1,&str2) != EOF){

        int tmp[max] = {0};
        if(strlen(str1) > strlen(str2))
            length = strlen(str1);
        else length = strlen(str2);

        z035j03(str1);
        z035j03(str2);
    //
    //    for(i = 0;i < strlen(str1);i++){
    //        printf("%c",str1[i]);
    //    }
    //    printf(" ");
    //    for(i = 0;i < strlen(str2);i++){
    //        printf("%c",str2[i]);
    //    }
    //    printf("\n");


//        for(i = 0;i < length+1;i++){
//            tmp[i] += (str1[i]-48) + (str2[i]-48);
//
//            if(tmp[i] >= 10){
//                tmp[i+1]+=1;
//                tmp[i]-=10;
//            }
//            //printf("%d ",tmp[i+1]);
//            sum[i] = tmp[i] + 48;
//            //printf("%c ",sum[i]);
//
//        }
//        //printf("%d")
//        if(sum[length] == '0')
//                longg = length;
//        else longg = length+1;

        plus(length,str1,str2,sum,longg);

        if(sum[length] == '0')
                longg = length;
        else longg = length+1;

        for(i = longg-1;i >= 0;i--){
            printf("%c",sum[i]);
        }
        printf("\n");
    }
}
