#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define max 301

void z035j03(char str[max]){//¤ÏÂà
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

void plus(int length,char str1[max],char str2[max],char sum[max]){
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

}

void ru03(int length,char str1[max],char str2[max],char sum[max]){
    int i,tmp[max] = {0};
    for(i = 0;i < length+1;i++){
            //tmp[i] += (str1[i]-48) + (str2[i]-48);
            if(str1[i] < str2[i]){
                str1[i+1] -= 1;
                str1[i] += 10;
            }
            tmp[i] = str1[i] - str2[i];
            sum[i] = tmp[i] + 48;
    }

}

int main(){

    char sum[max] = {0},str1[max],str2[max],a;
    int length,i,longg = 0;

    while(scanf("%s %c %s",&str1,&a,&str2) != EOF){

        int tmp[max] = {0};

        if(strlen(str1) > strlen(str2))
            length = strlen(str1);
        else length = strlen(str2);

        z035j03(str1);
        z035j03(str2);

        if(a == '+'){
            plus(length,str1,str2,sum);
            if(sum[length] == '0')
                longg = length;
            else longg = length+1;
        }

        else{
            ru03(length,str1,str2,sum);
            if(sum[length-1] == '0')
                longg = length-1;
            else longg = length;
        }

//        if(sum[length] == '0')
//                longg = length;
//        else longg = length+1;

        for(i = longg-1;i >= 0;i--){
            printf("%c",sum[i]);
        }
        printf("\n");
    }
}
