#include <stdio.h>
#include <string.h>
float geometricSeries(float a, float r, int n){
    int i;
    float rr = 1;
    //double pow(double x, double y);
    float sum = (a*(1 - pow(r,n)))/(1 - r);
    return sum;
}

int main(){
    int c;
    float a,b;
    scanf("%f %f %d",&a,&b,&c);
    if (fabs (b - 1.0 ) < 0.00000001)
        printf("%f",a*c);
    else
        printf("%f\n",geometricSeries(a,b,c));

}
