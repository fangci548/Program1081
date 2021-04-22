#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char a [200];

    while(gets(a) != 0){
        int b = strlen(a);

        for (i = 1;i <= b;i++){

            printf("%c",a[b-i]);
        }
        printf("\n");

    }




}
