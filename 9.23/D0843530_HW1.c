#include<stdio.h>

int main(){

    char char1_type ='F';
    int char1_hp = 42;
    int char1_atk = 18;
    int char1_def = 9;

    char char2_type ='G';
    int char2_hp = 45;
    int char2_atk = 15;
    int char2_def = 10;

    char char3_type ='A';
    int char3_hp = 50;
    int char3_atk = 15;
    int char3_def = 5;

    char char4_type;
    int char4_hp;
    int char4_atk;
    int char4_def;
    
	float tal1=((char1_hp*1.0)+(char1_atk*0.8)+(char1_def*0.5)-50)*6.5;
	float tal2=((char2_hp*1.0)+(char2_atk*0.8)+(char2_def*0.5)-50)*6.5;
	float tal3=((char3_hp*1.0)+(char3_atk*0.8)+(char3_def*0.5)-50)*6.5;


    printf("����1\n����W��:�Z��\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n�j�׹w��=%.2f\n\n",char1_type,char1_hp,char1_atk,char1_def,tal1);
    printf("����2\n����W��:�͵�\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n�j�׹w��=%.2f\n\n",char2_type,char2_hp,char2_atk,char2_def,tal2);
    printf("����3\n����W��:�y��\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n�j�׹w��=%.2f\n\n",char3_type,char3_hp,char3_atk,char3_def,tal3);
    //printf("����1\n����W��:�Z��\n�ݩ�:F\t\t��q:42\n����:18\t\t���m:9\n\n");//�`�M69
    //printf("����2\n����W��:�͵�\n�ݩ�:G\t\t��q:45\n����:15\t\t���m:10\n\n");//�`�M70
    //printf("����3\n����W��:�y��\n�ݩ�:A\t\t��q:50\n����:15\t\t���m:5\n\n");//�`�M70
    //�j�׹w�� = ( ��q * 1.0 + ���� * 0.8 + ���m * 0.5 - 50 ) * 6.5

    printf("�s�W����\n");
    printf("�ݩ�:");
    scanf("%c",&char4_type);
    getchar();
    printf("��q:");
    scanf("%d",&char4_hp);
    getchar();
    printf("����:");
    scanf("%d",&char4_atk);
    getchar();
    printf("���m:");
    scanf("%d",&char4_def);
    
	float tal4=((char4_hp*1.0)+(char4_atk*0.8)+(char4_def*0.5)-50)*6.5;


    printf("\n����4\n����W��:�ۭq����\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n\n",char4_type,char4_hp,char4_atk,char4_def);
	printf("�j�׹w��=%.2f\n\n",tal4);
    return 0;
}
