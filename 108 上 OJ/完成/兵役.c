#include <stdio.h>

int main (){

    double hi,wei,b;

    scanf("%lf %lf",&hi,&wei);

    float high = ((int)hi)/100.0;  //�����ऽ��


    float weight = ((int)(wei*10))/10.0;  //  ��/�@�Ӥp�� �N�|�ܦ��B�I��


    b = weight/((high)*(high));

    float bmi = ((int)(b*10+0.5))/10.0;






    if (bmi < 16.5||bmi>31.5||hi>=196||hi<=157){
        printf("MILITARY SERVICE EXEMPTION");
    }

    else if ((bmi>=16.5&&bmi<17.0)||(bmi>31.0&&bmi<=31.5)){
        printf("ALTERNATIVE SERVICE");
    }

    else if (bmi>=17.0&&bmi<=31.0){
        printf("REGULAR SERVICE");
    }






}
