#include<stdio.h>
#include<string.h>
char content[][21]={"1.����","2.���~","3.��q","4.���O","5.�T��","6.�b��","7.����","8.���J","9.��L"}; //���D

char food[][1000]={"a.����","b.�ȶ�","c.�߶�","d.�U�ȯ�","e.�d�]","f.��L"}; //�������

char drink[][1000]={"a.��n����","b.��w����","c.�s�붼��","d.��L"}; //���ƿ��

char transport[][1000]={"a.����","b.�[�o","c.�p�{��","d.����","e.���K","f.�����O","g.��L"}; //��q���

char expense[][1000]={"a.�A��","b.§��","c.�Ƨ��~","d.���e","e.��`�Ϋ~","f.�Я�","g.��L"}; //��O���

char entertainment[][1000]={"a.�q�v","b.KTV","c.�B��","d.�p��/���e","e.���@","f.�]��","g.��L"}; //�T�ֿ��

char bill[][1000]={"a.���q�O","b.�q�H�O","c.�˴��O","d.�H�Υd","e.�|","f.�@��","g.��L"}; //�b����

char medcine[][1000]={"a.����","b.����","c.��N�O","d.����","e.��L"}; //�������

void printitem(char str[][1000],int a){
    int i;
    for(i = 0;i < a;i++){
        printf("%s ",str[i]);
    }
    printf("\n");
}

void store(char tmp[100][1000],char item[100][1000],int a){ //a = �X�Ӷ���  tmp = �Ȯ�  item = Ū�����
    int i;
    for(i = 0;i < a;i++){
        strcpy(tmp[i],item[i]);
    }


}



int main(){
    int i,kind = 9,project,money,today_money[100],now = 0;
    char chose,today_item[100][100],tmp[1000][1000];
    printf("��ܶ���\n");//  �G���s����  �@���s����
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
    printf("��ܶ���\n");
    scanf(" %c",&chose);

    printf("��J���B $\n");
    scanf("%d",&money);

    strcpy(today_item[now],tmp[chose - 97]);

    today_money[now] = money;
    //printf(" %d",today_money[now]);
    for(i = 0;i <= now;i++){
        printf("%s %d",today_item[i],today_money[i]);
    }
    now++;

}
