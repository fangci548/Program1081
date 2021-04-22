#include <stdio.h>
#include <string.h>

int main()
{

    int i,j;
    char b[1000];
    char a[ ] = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";

    while(gets(b) != 0)
    {

        for(i = 0; i < strlen(b); i++)
        {
            if (b[i] == ' ')
                printf(" ");

            for(j = 0; j < strlen(a); j++)
            {


                if (b[i] == a[j])
                    printf("%c", a[j-2]);

            }
        }
        printf("\n");



    }

}
