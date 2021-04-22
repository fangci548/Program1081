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


    printf("角色1\n角色名稱:鎧凌\n屬性:%c\t\t血量:%d\n攻擊:%d\t\t防禦:%d\n強度預測=%.2f\n\n",char1_type,char1_hp,char1_atk,char1_def,tal1);
    printf("角色2\n角色名稱:睿童\n屬性:%c\t\t血量:%d\n攻擊:%d\t\t防禦:%d\n強度預測=%.2f\n\n",char2_type,char2_hp,char2_atk,char2_def,tal2);
    printf("角色3\n角色名稱:宜銹\n屬性:%c\t\t血量:%d\n攻擊:%d\t\t防禦:%d\n強度預測=%.2f\n\n",char3_type,char3_hp,char3_atk,char3_def,tal3);
    //printf("角色1\n角色名稱:鎧凌\n屬性:F\t\t血量:42\n攻擊:18\t\t防禦:9\n\n");//總和69
    //printf("角色2\n角色名稱:睿童\n屬性:G\t\t血量:45\n攻擊:15\t\t防禦:10\n\n");//總和70
    //printf("角色3\n角色名稱:宜銹\n屬性:A\t\t血量:50\n攻擊:15\t\t防禦:5\n\n");//總和70
    //強度預測 = ( 血量 * 1.0 + 攻擊 * 0.8 + 防禦 * 0.5 - 50 ) * 6.5
    int chose;
    int failed=0;
    int first_atk,second_atk;

    do{
        printf("是否新增角色(1.Yes/2.No)?");
        scanf("%d",&chose);
        failed = 0;
        if (chose>=3){
            printf("輸入錯誤\n");
            failed = 1;
        }
    }while(failed == 1);


    if (chose==1){ //新增角色

        do{  //新增角色
            failed = 0;
            printf("\n新增角色\n");
            printf("屬性:");
            scanf(" %c",&char4_type); //%c之前要有個空格  若是打%c不用打getchar 或 \n
            printf("血量:");
            scanf("%d",&char4_hp);
            getchar();
            printf("攻擊:");
            scanf("%d",&char4_atk);
            getchar();
            printf("防禦:");
            scanf("%d",&char4_def);

            int sum=char4_def+char4_hp+char4_atk;

            if ((char4_type!='G'&&char4_type!='W'&&char4_type!='A'&&char4_type!='F'&&char4_type!='a'&&char4_type!='f'&&char4_type!='g'&&char4_type!='w')&&(char4_hp<40||char4_hp>50||char4_atk<15||char4_atk>20||char4_def<5||char4_def>10||sum<65||sum>70)){
                printf("\n錯誤：無此屬性\n錯誤：能力數值在限制範圍之外\n");
                failed = 1;

            }

            else if (char4_type!='G'&&char4_type!='W'&&char4_type!='A'&&char4_type!='F'&&char4_type!='a'&&char4_type!='f'&&char4_type!='g'&&char4_type!='w'){
                printf("錯誤：無此屬性\n");   //若輸入非F A G W之屬性 則輸出無此屬性
                failed = 1;

            }



            else if (char4_hp<40||char4_hp>50||char4_atk<15||char4_atk>20||char4_def<5||char4_def>10||sum<65||sum>70){
                printf("錯誤：能力數值在限制範圍之外\n");  //設定各屬性之範圍
                failed = 1;
            }
        }while(failed == 1);


        float tal4=((char4_hp*1.0)+(char4_atk*0.8)+(char4_def*0.5)-50)*6.5;
        printf("\n角色4\n角色名稱:自訂角色\n屬性:%c\t\t血量:%d\n攻擊:%d\t\t防禦:%d\n\n",toupper(char4_type),char4_hp,char4_atk,char4_def);
        printf("強度預測=%.2f\n\n",tal4); //列出新增角色之屬性


        do {  //新增角色後 選擇先攻後攻
                failed = 0;
                do {  //當先攻輸入錯誤時 重複輸入
                    failed = 0;
                    printf("\n選擇先攻角色： ");

                    scanf("%d",&first_atk);
                        if (first_atk>=5){ //新增角色後，有4個角色 >=5
                            printf("錯誤：無此角色\n");
                            failed = 1;
                        }
                }while(failed == 1);

                do {  //當後攻輸入錯誤時 重複輸入
                    failed = 0;
                    printf("選擇後攻角色： ");
                    scanf("%d\n",&second_atk);
                        if (second_atk>=5){ //新增角色後，有4個角色 >=5
                            printf("錯誤：無此角色\n");
                            failed = 1; //直接結束程式
                        }
                }while(failed == 1);

                if (first_atk==second_atk){ //重複選取
                    printf("錯誤：不可重複選取");
                    failed = 1;
                }

                else {
                    printf("\n先攻為角色%d、後攻為角色%d\n\n",first_atk,second_atk);
                }





            }while(failed == 1 );
    }


    if (chose==2){ //直接選擇先攻後攻
        do{

            do{  //當先攻輸入錯誤時 重複輸入
                failed = 0;
                printf("\n選擇先攻角色： ");
                scanf("%d",&first_atk);
                    if (first_atk>=4){ //新增角色後，有4個角色 >=5
                        printf("錯誤：無此角色");
                        failed = 1;
                    }
            }while(failed == 1);



            do{  //當後攻輸入錯誤時 重複輸入
                failed = 0;
                printf("選擇後攻角色： ");
                scanf("%d",&second_atk);
                    if (second_atk>=4){ //新增角色後，有4個角色 >=5
                        printf("錯誤：無此角色\n");
                        failed = 1; //直接結束程式
                    }
            }while(failed == 1);


            if (first_atk==second_atk){ //重複選取
                printf("錯誤：不可重複選取\n");
                failed = 1;
            }


            else {
                printf("\n先攻為角色%d、後攻為角色%d\n",first_atk,second_atk);
            }
        }while(failed == 1);

    }



    int atk1,def1,atk2,def2,hp1,hp2;

    switch (first_atk){ //取出先攻的防禦及攻擊力
        case 1:
            char1_atk = atk1;
            char1_def = def1;
            char1_hp = hp1;
        case 2:
            (atk1 = char2_atk) && (def1 = char2_def) && (hp1 = char2_hp);
        case 3:
            (atk1 = char3_atk) && (def1 = char3_def) && (hp1 = char3_hp);
        case 4:
            (atk1 = char4_atk) && (def1 = char4_def) && (hp1 = char4_hp);
    }

    /*switch (second_atk){ //取出後攻的防禦及攻擊力

        case 1:
            (second_atk_atk = char1_atk) && (second_atk_def = char1_def) && (second_atk_hp = char1_hp);
        case 2:
            (second_atk_atk = char2_atk) && (second_atk_def = char2_def) && (second_atk_hp = char2_hp);
        case 3:
            (second_atk_atk = char3_atk) && (second_atk_def = char3_def) && (second_atk_hp = char3_hp);
        case 4:
            (second_atk_atk = char4_atk) && (second_atk_def = char4_def) && (second_atk_hp = char4_hp);
    }*/



    printf("戰鬥開始\n\n");
    printf("%d   %d  %d  %d ",first_atk,atk1,def1,hp1);

    /*6do{
        failed = 0;

        printf("角色%d 對 角色%d 發動攻擊，造成 %d 點傷害/n",first_atk,second_atk,first_atk_atk - second_atk_def);
        second_atk_hp = first_atk - second_atk_hp;
        printf("角色%d HP： %d 角色%d HP： %d\n",first_atk,first_atk_hp,second_atk,second_atk_hp);

        if (first_atk_hp<=second_atk_hp&&second_atk_hp<=first_atk_hp)
            failed = 1;

        printf("角色%d 對 角色%d 發動攻擊，造成 %d 點傷害/n",second_atk,first_atk,second_atk_atk-first_atk_def);
        first_atk_hp = second_atk - first_atk_hp;
        printf("角色%d HP： %d 角色%d HP： %d\n",first_atk,first_atk_hp,second_atk,second_atk_hp);

        if (first_atk_hp<=second_atk_hp&&second_atk_hp<=first_atk_hp){
            failed = 1;
        }

    }while(failed == 0);

*/

    return 0;
}
