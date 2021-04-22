#include <stdio.h>

int main (){

    int year;
    scanf("%d",&year);

    if ((year % 4 == 0)&&(year % 100 != 0)){
        printf("leap year");

    }
    else if ((year % 4 == 0)&&(year % 400 != 0)){
        printf("normal year");
    }

    else if (year % 400 == 0){
        printf("leap year");
    }

    else {
        printf("normal year");
    }
}
