#include<stdio.h>
#include<ctype.h>

int main(){

    char type[10] = "FGA";
    int hp[10] = {42,45,50};
    int atk[10] = {18,15,15};
    int def[10] =  {9,10,5};
    int current = 3;  //�{�b���X�Ө���
    int i,chose,fail = 0;
    char name[][100] = {"�Z��","�͵�","�y��",""};
    float tal[10] = {0};
    char char4_type;
    int char4_hp;
    int char4_atk;
    int char4_def;
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

//    float tal1=((char1_hp*1.0)+(char1_atk*0.8)+(char1_def*0.5)-50)*6.5;
//	float tal2=((char2_hp*1.0)+(char2_atk*0.8)+(char2_def*0.5)-50)*6.5;
//	float tal3=((char3_hp*1.0)+(char3_atk*0.8)+(char3_def*0.5)-50)*6.5;


    while(fail == 0){

        do{
            fail = 0;
            printf("1. �s�W�έק�s�W����\n2. ��ܩҦ�������\n3. �԰�\n0. �����C��\n�п�ܡG");
            scanf("%d",&chose);
            if ((chose < 0) || (chose > 3)){
                fail = 1;
                printf("\n��J���~!\n\n");
            }
        }while(fail == 1);
        switch (chose){
            case 0:
                fail = 1;
                printf("\n�����C��\n");
                break;

            case 1:  //�ǳƷs�W����
                do{  //�s�W����
                    failed = 0;
                    if(current < 4){  //�P�_�O�_���ק�or�s�W
                        printf("\n�s�W����\n");
                    }
                    else{  //�P�_�O�_���ק�or�s�W
                        printf("\n�ק�s�W����\n");
                    }
                    printf("�W��:");
                    scanf("%s",name[3]);
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
                hp[3] = char4_hp;
                type[3] = toupper(char4_type);
                atk[3] = char4_atk;
                def[3] = char4_def;
                tal[3] = ((hp[3]*1.0)+(atk[3]*0.8)+(def[3]*0.5)-50)*6.5;
                printf("\n����4\n����W��:%s\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n����j�׹w���G%.2f\n\n",name[3],type[3],hp[3],atk[3],def[3],tal[3]);


                break;

            case 2:
                for (i = 0;i < current;i++){
                    tal[i] = ((hp[i]*1.0)+(atk[i]*0.8)+(def[i]*0.5)-50)*6.5;
                    printf("\n����%d\n����W��:%s\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n����j�׹w���G%.2f\n\n",i+1,name[i],type[i],hp[i],atk[i],def[i],tal[i]);
                }
                break;

            case 3:
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

                now = 1;
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
    }
}
