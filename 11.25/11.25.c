#include <stdio.h>
#include <string.h>
int maximum(int a,int b,int c){
    if (a>b&&a>c)
        return a;
    else if (b>c&&b>c)
        return b;
    else if (c>b&&c>a)
        return c;
}

int main(){
    int a, b,c;
    scanf("%d %d %d",&a,&b,&c);

    printf("%d\n",maximum(a,b,c));

}
