#include<stdio.h>
#include<ctype.h>

int main(){

    char type[10] = "FGA";
    int hp[10] = {42,45,50};
    int atk[10] = {18,15,15};
    int def[10] =  {9,10,5};
    int current = 3;  //現在有幾個角色
    int i,chose,fail = 0;
    char name[][100] = {"鎧凌","睿童","宜��",""};
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
    float rate[2];  //屬性相剋倍率
    int hurt[2];  //攻擊傷害
    int now;
    int half_hp[2];
    int who[2];

//    float tal1=((char1_hp*1.0)+(char1_atk*0.8)+(char1_def*0.5)-50)*6.5;
//	float tal2=((char2_hp*1.0)+(char2_atk*0.8)+(char2_def*0.5)-50)*6.5;
//	float tal3=((char3_hp*1.0)+(char3_atk*0.8)+(char3_def*0.5)-50)*6.5;


    while(fail == 0){

        do{
            fail = 0;
            printf("1. 新增或修改新增角色\n2. 顯示所有角色資料\n3. 戰鬥\n0. 結束遊戲\n請選擇：");
            scanf("%d",&chose);
            if ((chose < 0) || (chose > 3)){
                fail = 1;
                printf("\n輸入錯誤!\n\n");
            }
        }while(fail == 1);
        switch (chose){
            case 0:
                fail = 1;
                printf("\n結束遊戲\n");
                break;

            case 1:  //準備新增角色
                do{  //新增角色
                    failed = 0;
                    if(current < 4){  //判斷是否為修改or新增
                        printf("\n新增角色\n");
                    }
                    else{  //判斷是否為修改or新增
                        printf("\n修改新增角色\n");
                    }
                    printf("名稱:");
                    scanf("%s",name[3]);
                    printf("屬性:");
                    scanf(" %c",&char4_type); //%c之前要有個空格  若是打%c不用打getchar 或 \n
                    printf("血量:");
                    scanf("%d",&char4_hp);
                    printf("攻擊:");
                    scanf("%d",&char4_atk);
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
                current = 4;
                hp[3] = char4_hp;
                type[3] = toupper(char4_type);
                atk[3] = char4_atk;
                def[3] = char4_def;
                tal[3] = ((hp[3]*1.0)+(atk[3]*0.8)+(def[3]*0.5)-50)*6.5;
                printf("\n角色4\n角色名稱:%s\n屬性:%c\t\t血量:%d\n攻擊:%d\t\t防禦:%d\n角色強度預測：%.2f\n\n",name[3],type[3],hp[3],atk[3],def[3],tal[3]);


                break;

            case 2:
                for (i = 0;i < current;i++){
                    tal[i] = ((hp[i]*1.0)+(atk[i]*0.8)+(def[i]*0.5)-50)*6.5;
                    printf("\n角色%d\n角色名稱:%s\n屬性:%c\t\t血量:%d\n攻擊:%d\t\t防禦:%d\n角色強度預測：%.2f\n\n",i+1,name[i],type[i],hp[i],atk[i],def[i],tal[i]);
                }
                break;

            case 3:
                do{  //選擇先攻後攻

                    do{  //當先攻輸入錯誤時 重複輸入
                        failed = 0;
                        printf("\n選擇先攻角色：");
                        scanf("%d",&first_atk);
                        if (first_atk > current){ //新增角色後，有4個角色 >=5
                            printf("錯誤：無此角色");
                            failed = 1;
                        }
                    }while(failed == 1);


                    do{  //當後攻輸入錯誤時 重複輸入
                        failed = 0;
                        printf("選擇後攻角色：");
                        scanf("%d",&second_atk);

                        if (second_atk > current){ //新增角色後，有4個角色 >=5
                                printf("錯誤：無此角色\n");
                                failed = 1;
                        }
                    }while(failed == 1);

                    if (first_atk==second_atk){ //重複選取
                        printf("錯誤：不可重複選取\n");
                        failed = 1;
                    }
                    else {  //輸入正確 輸出先攻及後攻
                        printf("\n先攻為角色%d、後攻為角色%d\n",first_atk,second_atk);
                    }
                }while(failed == 1);

                atk_atk[0] = atk[first_atk - 1];  //存入數值
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

                switch(atk_type[0]){  //相剋倍率
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
                do{  //對戰
                    failed = 0;
                    now = !now;
                    if (atk_hp[now] < half_hp[now]){
                        hurt[now] = (int)(atk_atk[now]*rate[now]*1.2-atk_def[!now]);
                        //攻擊傷害 = (int)(攻擊方攻擊力 * 相剋倍率 * 殘血倍率 - 被攻擊方防禦力)
                    }
                    else{
                        hurt[now] = (int)(atk_atk[now]*rate[now]*1.0-atk_def[!now]);
                    }

                    printf("角色%d 對 角色%d 發動攻擊，造成 %d 點傷害\n",who[now],who[!now],hurt[now]);
                    atk_hp[!now]-=hurt[now];
                    printf("角色%d HP： %d 角色%d HP： %d\n\n",who[0],atk_hp[0],who[1],atk_hp[1]);

                    if (atk_hp[!now]<=0){
                        failed = 1;
                        break;
                    }
                }while(failed == 0);

                printf("角色%d 失去戰鬥能力\n戰鬥結束\n\n角色%d 獲勝\n\n",who[!now],who[now]);
        }
    }
}
