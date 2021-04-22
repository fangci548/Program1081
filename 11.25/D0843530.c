#include <stdio.h>
#include <string.h>
#include <ctype.h>

void PrintCharData(char name[],char type,int hp,int atk,int def){

    printf("\n����W��:%s\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n����j�׹w���G%.2f\n\n",name,type,hp,atk,def,((hp*1.0)+(atk*0.8)+(def*0.5)-50)*6.5);

}


void EditNewChar(int current,int index,char name[] ,char type[],int hp[],int atk[],int def[],float tal[]){
    char char4_type;
    int char4_hp;
    int char4_atk;
    int char4_def;
    int failed;
    do{  //�s�W����
        failed = 0;

        printf("�W��:");
        scanf("%s",name);//�]���Ƕi�ӬO�@��
        printf("�ݩ�:");
        scanf(" %c",&char4_type); //%c���e�n���ӪŮ�  �Y�O��%c���Υ�getchar �� \n
        printf("��q:");
        scanf("%d",&char4_hp);
        printf("����:");
        scanf("%d",&char4_atk);
        printf("���m:");
        scanf("%d",&char4_def);

        int sum=char4_def+char4_hp+char4_atk;

        if ((char4_type!='G'&&char4_type!='W'&&char4_type!='A'&&char4_type!='F'&&char4_type!='a'&&char4_type!='f'&&char4_type!='g'&&char4_type!='w')&&(char4_hp<40||char4_hp>50||char4_atk<15||char4_atk>20||char4_def<5||char4_def>10||sum<65||sum>70)){
            printf("\n���~�G�L���ݩ�\n���~�G��O�ƭȦb����d�򤧥~\n");
            failed = 1;

        }
        else if (char4_type!='G'&&char4_type!='W'&&char4_type!='A'&&char4_type!='F'&&char4_type!='a'&&char4_type!='f'&&char4_type!='g'&&char4_type!='w'){
            printf("���~�G�L���ݩ�\n");   //�Y��J�DF A G W���ݩ� �h��X�L���ݩ�
            failed = 1;

        }
        else if (char4_hp<40||char4_hp>50||char4_atk<15||char4_atk>20||char4_def<5||char4_def>10||sum<65||sum>70){
            printf("���~�G��O�ƭȦb����d�򤧥~\n");  //�]�w�U�ݩʤ��d��
            failed = 1;
        }
    }while(failed == 1);

    current = 4;
    hp[index] = char4_hp;
    type[index] = toupper(char4_type);
    atk[index] = char4_atk;
    def[index] = char4_def;
    tal[index] = ((hp[index]*1.0)+(atk[index]*0.8)+(def[index]*0.5)-50)*6.5;



}


void Battling(int atk_hp[],int half_hp[],int hurt[],int atk_atk[],float rate[],int atk_def[],int who[]){
    int failed;
    int now = 1;
    do{  //���
        failed = 0;
        now = !now;
        if (atk_hp[now] < half_hp[now]){
            hurt[now] = (int)(atk_atk[now]*rate[now]*1.2-atk_def[!now]);
            //�����ˮ` = (int)(����������O * �۫g���v * �ݦ孿�v - �Q�����訾�m�O)
        }
        else{
            hurt[now] = (int)(atk_atk[now]*rate[now]*1.0-atk_def[!now]);
        }

        printf("����%d �� ����%d �o�ʧ����A�y�� %d �I�ˮ`\n",who[now],who[!now],hurt[now]);
        atk_hp[!now]-=hurt[now];
        printf("����%d HP�G %d ����%d HP�G %d\n\n",who[0],atk_hp[0],who[1],atk_hp[1]);

        if (atk_hp[!now]<=0){
            failed = 1;
            break;
        }
    }while(failed == 0);
    printf("����%d ���h�԰���O\n�԰�����\n\n����%d ���\n\n",who[!now],who[now]);
}

void SelectAndBattle(int current,char type[],int hp[],int atk[],int def[]){
    int failed;
    int first_atk,second_atk;
    int atk_hp[2];
    int atk_atk[2];
    int atk_def[2];
    char atk_type[2];
    float rate[2];  //�ݩʬ۫g���v
    int hurt[2];
    int who[2];
    int half_hp[2];

    do{  //��ܥ�����

        do{  //������J���~�� ���ƿ�J
            failed = 0;
            printf("\n��ܥ��𨤦�G");
            scanf("%d",&first_atk);
            if (first_atk > current){ //�s�W�����A��4�Ө��� >=5
                printf("���~�G�L������");
                failed = 1;
            }
        }while(failed == 1);


        do{  //�����J���~�� ���ƿ�J
            failed = 0;
            printf("��ܫ�𨤦�G");
            scanf("%d",&second_atk);

            if (second_atk > current){ //�s�W�����A��4�Ө��� >=5
                    printf("���~�G�L������\n");
                    failed = 1;
            }
        }while(failed == 1);

        if (first_atk==second_atk){ //���ƿ��
            printf("���~�G���i���ƿ��\n");
            failed = 1;
        }
        else {  //��J���T ��X����Ϋ��
            printf("\n���𬰨���%d�B��𬰨���%d\n",first_atk,second_atk);
        }
    }while(failed == 1);
    atk_atk[0] = atk[first_atk - 1];  //�s�J�ƭ�
    atk_atk[1] = atk[second_atk - 1];
    atk_def[0] = def[first_atk - 1];
    atk_def[1] = def[second_atk - 1];
    atk_hp[0] = hp[first_atk - 1];
    atk_hp[1] = hp[second_atk - 1];
    atk_type[0] = type[first_atk - 1];
    atk_type[1] = type[second_atk - 1];
    half_hp[0] = hp[first_atk - 1]/2;
    half_hp[1] = hp[second_atk - 1]/2;
    who[0] = first_atk;
    who[1] = second_atk;

    rate[0] = 1.0;
    rate[1] = 1.0;

    switch(atk_type[0]){  //�۫g���v
        case 'W':
            if (atk_type[1] == 'F'){
                rate[0] = 1.2;
                rate[1] = 0.8;
            }
            else if (atk_type[1] == 'G'){
                rate[1] = 1.2;
                rate[0] = 0.8;
            }
            break;

        case 'F':
            if (atk_type[1] == 'A'){
                rate[0] = 1.2;
                rate[1] = 0.8;
            }
            else if (atk_type[1] == 'W'){
                rate[1] = 1.2;
                rate[0] = 0.8;
            }
            break;

        case 'A':
            if (atk_type[1] == 'G'){
                rate[0] = 1.2;
                rate[1] = 0.8;
            }
            else if (atk_type[1] == 'F'){
                rate[1] = 1.2;
                rate[0] = 0.8;
            }
            break;

        case 'G':
            if (atk_type[1] == 'W'){
                rate[0] = 1.2;
                rate[1] = 0.8;
            }
            else if (atk_type[1] == 'A'){
                rate[1] = 1.2;
                rate[0] = 0.8;
            }
            break;
    }

    Battling(atk_hp,half_hp,hurt,atk_atk,rate,atk_def,who);
}


int main(){
    char type[10] = "FGA";
    int hp[10] = {50,40,45};
    int atk[10] = {15,20,17};
    int def[10] =  {5,8,7};
    int current = 3;  //�{�b���X�Ө���
    int i,chose,fail = 0;
    char name[][100] = {"�Z��","�͵�","�y��",""};
    float tal[10] = {0};
    int failed;
    int first_atk,second_atk;
    int atk_hp[2];
    int atk_atk[2];
    int atk_def[2];
    char atk_type[2];
    float rate[2];  //�ݩʬ۫g���v
    int hurt[2];  //�����ˮ`
    int now;
    int half_hp[2];
    int who[2];

    while(fail == 0){

        fail = 0;
        printf("1. �s�W�έק�s�W����\n2. ��ܩҦ�������\n3. �԰�\n0. �����C��\n�п�ܡG");
        scanf("%d",&chose);
        switch(chose){
            case 0:
                fail = 1;
                printf("\n�����C��\n");
                break;

            case 1:
                if(current < 4){  //�P�_�O�_���ק�or�s�W
                printf("\n�s�W����\n");
                }
                else{  //�P�_�O�_���ק�or�s�W
                    printf("\n�ק�s�W����\n");
                }

                EditNewChar(current,3,name[3],type,hp,atk,def,tal);
                printf("����4\n");
                PrintCharData(name[3],type[3],hp[3],atk[3],def[3]);
                current = 4;
                break;

            case 2:
                for (i = 0;i < current;i++){
                    printf("����%d\n",i+1);
                    PrintCharData(name[i],type[i],hp[i],atk[i],def[i]);
                }
                break;

            case 3:
                SelectAndBattle(current,type,hp,atk,def);
                break;
            default:
                printf("\n��J���~!\n\n");
                break;
        }
    }
}
