#include<stdio.h>
#include<string.h>
char content[][21]={"1.食物","2.飲品","3.交通","4.消費","5.娛樂","6.帳單","7.醫療","8.收入","9.其他"}; //標題

char food[][1000]={"a.早飯","b.午飯","c.晚飯","d.下午茶","e.宵夜","f.其他"}; //食物選擇

char drink[][1000]={"a.手搖飲料","b.氣泡飲料","c.酒精飲料","d.其他"}; //飲料選擇

char transport[][1000]={"a.公車","b.加油","c.計程車","d.火車","e.高鐵","f.停車費","g.其他"}; //交通選擇

char expense[][1000]={"a.服飾","b.禮物","c.化妝品","d.美容","e.日常用品","f.房租","g.其他"}; //花費選擇

char entertainment[][1000]={"a.電影","b.KTV","c.運動","d.小說/漫畫","e.網咖","f.夜店","g.其他"}; //娛樂選擇

char bill[][1000]={"a.水電費","b.電信費","c.瓦斯費","d.信用卡","e.稅","f.罰單","g.其他"}; //帳單選擇

char medcine[][1000]={"a.中醫","b.西醫","c.手術費","d.成藥","e.其他"}; //醫療選擇

void printitem(char str[][1000],int a){
    int i;
    for(i = 0;i < a;i++){
        printf("%s ",str[i]);
    }
    printf("\n");
}

void store(char tmp[100][1000],char item[100][1000],int a){ //a = 幾個項目  tmp = 暫時  item = 讀取表格
    int i;
    for(i = 0;i < a;i++){
        strcpy(tmp[i],item[i]);
    }


}



int main(){
    int i,kind = 9,project,money,today_money[100],now = 0;
    char chose,today_item[100][100],tmp[1000][1000];
    printf("選擇項目\n");//  二維存項目  一維存價錢
    for(i = 0;i < kind;i++){
        printf("%s ",content[i]);
    }
    printf("\n");
    scanf("%d",&project);
//    for(i = 0;i < strlen(drink);i++){
//            printf("%s ",drink[i]);
//    }
    //printitem(bill);
    switch (project){
        case 1:
            printitem(food,sizeof(food)/1000);
            store(tmp,food,sizeof(food)/1000);
            break;
        case 2:
            printitem(drink,sizeof(drink)/1000);
            store(tmp,drink,sizeof(drink)/1000);
            break;
        case 3:
            printitem(transport,sizeof(transport)/1000);
            store(tmp,transport,sizeof(transport)/1000);
            break;
        case 4:
            printitem(expense,sizeof(expense)/1000);
            store(tmp,expense,sizeof(expense)/1000);
            break;
        case 5:
            printitem(entertainment,sizeof(entertainment)/1000);
            store(tmp,entertainment,sizeof(entertainment)/1000);
            break;
        case 6:
            printitem(bill,sizeof(bill)/1000);
            store(tmp,bill,sizeof(bill)/1000);
            break;
        case 7:
            printitem(medcine,sizeof(medcine)/1000);
            store(tmp,medcine,sizeof(medcine)/1000);
            break;
    }
    printf("選擇項目\n");
    scanf(" %c",&chose);

    printf("輸入金額 $\n");
    scanf("%d",&money);

    strcpy(today_item[now],tmp[chose - 97]);

    today_money[now] = money;
    //printf(" %d",today_money[now]);
    for(i = 0;i <= now;i++){
        printf("%s %d",today_item[i],today_money[i]);
    }
    now++;

}
