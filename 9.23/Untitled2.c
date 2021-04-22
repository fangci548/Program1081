#include <stdio.h>
 int main(){
    int num;
    char a = 't';
    scanf("%d",&num);
    if (num%13>=11||num%13<=1){

        if (num%13==11)
            a='J';
        if (num%13==12)
            a='Q';
        if (num%13==0)
            a='K';
        if (num%13==1)
            a='A';
    }

    if (num<=13)
        printf("spade-");
    if (num>13&&num<=26)
        printf("club-");
    if (num>26&&num<=39)
        printf("heart-");
    if (num>39&&num<=52)
        printf("diamond-");

    if (num%13>=11||num%13<=1){
        printf("%c",a);
        }
    else{
        printf("%d",num%13);
    }
    return 0;
    }
