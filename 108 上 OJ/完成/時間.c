#include <stdio.h>

int main(){
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    int a,b;
    a = (h/12)*(m/60)*(s/60)*360;
    b = (m/60)*(s/60)*360;
    if (a-b<0)
    printf("%.3f",b-a);
    else
        printf("%.3f",a-b);
    return 0;
}
