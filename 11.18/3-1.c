#include <stdio.h>

int main()
{

    int a,odd[50],even[50],q = 0,w = 0,N,tmp;
    char space;
    while(scanf("%d%c",&a,&space) != EOF)
    {


        if(a % 2 == 0)
        {
            even[q] = a;
            q++;
        }
        else
        {
            odd[w] = a;
            w++;
        }

        if(space == '\n')
        {
            for (int i = 0; i < (q-1); i++)
            {
                for(int j = 0; j < (q-1-i); j++)
                {
                    if(even[j+1] > even[j])
                    {
                        tmp = even[j];
                        even[j] = even[j+1];
                        even[j+1] = tmp;
                    }
                }
            }

            for (int i = 0; i < (w-1); i++)
            {
                for(int j = 0; j < (w-1-i); j++)
                {
                    if(odd[j+1] < odd[j])
                    {
                        tmp = odd[j];
                        odd[j] = odd[j+1];
                        odd[j+1] = tmp;
                    }
                }
            }

            for(int i = 0; i < w; i++)
            {
                printf("%d",odd[i]);
                if (i < (w-1))
                    printf(" ");
            }

            printf("\n");

            for(int i = 0; i < q; i++)
            {
                printf("%d",even[i]);

                if (i < (q-1))
                    printf(" ");
            }
            printf("\n\n");
            q = 0,w = 0;


        }





    }

}
