#include<stdio.h>
#include<ctype.h>

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


    printf("����1\n����W��:�Z��\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n����j�׹w���G%.2f\n\n",char1_type,char1_hp,char1_atk,char1_def,tal1);
    printf("����2\n����W��:�͵�\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n����j�׹w���G%.2f\n\n",char2_type,char2_hp,char2_atk,char2_def,tal2);
    printf("����3\n����W��:�y��\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n����j�׹w���G%.2f\n\n",char3_type,char3_hp,char3_atk,char3_def,tal3);
    //printf("����1\n����W��:�Z��\n�ݩ�:F\t\t��q:42\n����:18\t\t���m:9\n\n");//�`�M69
    //printf("����2\n����W��:�͵�\n�ݩ�:G\t\t��q:45\n����:15\t\t���m:10\n\n");//�`�M70
    //printf("����3\n����W��:�y��\n�ݩ�:A\t\t��q:50\n����:15\t\t���m:5\n\n");//�`�M70
    //�j�׹w�� = ( ��q * 1.0 + ���� * 0.8 + ���m * 0.5 - 50 ) * 6.5
    int chose;
    int failed=0;
    int first_atk,second_atk;

    do{ //�O�_�s�W���� ��J���~�� ���s�߰�
        printf("�O�_�s�W����(1.Yes/2.No)?");
        scanf("%d",&chose);
        failed = 0;
        if (chose>=3||chose<=0){
            printf("��J���~\n");
            failed = 1;
        }

    }while(failed == 1);


    if (chose==1){ //�s�W����

        do{  //�s�W���� �B�P�_�ƭȤ��ݩʬO�_���~
            failed = 0;
            printf("\n�s�W����\n");
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


        float tal4=((char4_hp*1.0)+(char4_atk*0.8)+(char4_def*0.5)-50)*6.5;
        printf("\n����4\n����W��:�ۭq����\n�ݩ�:%c\t\t��q:%d\n����:%d\t\t���m:%d\n",toupper(char4_type),char4_hp,char4_atk,char4_def);
        printf("����j�׹w���G%.2f\n",tal4); //�C�X�s�W���⤧�ݩ�


    }

    do{  //��ܥ�����

        do{  //������J���~�� ���ƿ�J
            failed = 0;
            printf("\n��ܥ��𨤦�G ");
            scanf("%d",&first_atk);
            if (first_atk >= 5){ //�s�W�����A��4�Ө��� >=5
                    printf("���~�G�L������");
                    failed = 1;
            }
        }while(failed == 1);


        do{  //�����J���~�� ���ƿ�J
            failed = 0;
            printf("��ܫ�𨤦�G ");
            scanf("%d",&second_atk);

            if (second_atk >= 5){ //�s�W�����A��4�Ө��� >=5
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





    int atk1,def1,atk2,def2,hp1,hp2;

    switch (first_atk){ //���X���𪺨��m�Χ����O
        case 1:
            atk1 = char1_atk;
            def1 = char1_def;
            hp1 = char1_hp;
            break;
        case 2:
            atk1 = char2_atk;
            def1 = char2_def;
            hp1 = char2_hp;
            break;
        case 3:
            atk1 = char3_atk;
            def1 = char3_def;
            hp1 = char3_hp;
            break;
        case 4:
            atk1 = char4_atk;
            def1 = char4_def;
            hp1 = char4_hp;
            break;
    }

    switch (second_atk){ //���X��𪺨��m�Χ����O

        case 1:
            atk2 = char1_atk;
            def2 = char1_def;
            hp2 = char1_hp;
            break;
        case 2:
            atk2 = char2_atk;
            def2 = char2_def;
            hp2 = char2_hp;
            break;
        case 3:
            atk2 = char3_atk;
            def2 = char3_def;
            hp2 = char3_hp;
            break;
        case 4:
            atk2 = char4_atk;
            def2 = char4_def;
            hp2 = char4_hp;
            break;
    }



    printf("�԰��}�l\n\n");


    do{  //���
        failed = 0;

        int hurt1 = atk1 - def2;
        int hurt2 = atk2 - def1;

        printf("����%d �� ����%d �o�ʧ����A�y�� %d �I�ˮ`\n",first_atk,second_atk,hurt1);
        hp2 = hp2 - hurt1;
        printf("����%d HP�G %d ����%d HP�G %d\n\n",first_atk,hp1,second_atk,hp2);

        if (hp1<=0 || hp2<=0){
            failed = 1;
            break;
        }


        printf("����%d �� ����%d �o�ʧ����A�y�� %d �I�ˮ`\n",second_atk,first_atk,hurt2);
        hp1 = hp1 - hurt2;
        printf("����%d HP�G %d ����%d HP�G %d\n\n",first_atk,hp1,second_atk,hp2);

        if (hp1<=0 || hp2<=0)
            failed = 1;




    }while(failed == 0);

    int win,lose;
    if (hp1<=0){  //��OĹ�a�ο�a
        lose = first_atk;
        win = second_atk;
    }

    else if (hp2<=0){  //��OĹ�a�ο�a
        lose = second_atk;
        win = first_atk;
    }



    printf("����%d ���h�԰���O\n�԰�����\n\n����%d ���\n",lose,win);


    return 0;
}
