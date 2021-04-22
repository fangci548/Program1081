#include<stdio.h>

void monthsearch(float food,float drink,float transport,float expense,float entertainment,float bill,float medcial,float takein,float other){
    float food_p,drink_p,transport_p,expense_p,entertainment_p,bill_p,medcial_p,takein_p,other_p;
    int month,num,n,i;
    float out,income,balance;

    printf("選擇月份\n");
    scanf("%d",&month);
    out = food + drink + transport + expense + entertainment + bill + medcial + other;
    income = takein;
    balance = out + income;
    printf("%d月 總支出 %.f\n     總收入 %.f",month,out,income);
    printf("\t結餘 %.f\n\n",balance);
    printf("各項消費比例:\n");
    if (food > 0){
        food_p = food/out*100;
        printf("    食物比例: %.2f%% $%.f\n",food_p,food);
    }
    if (drink > 0){
        drink_p = drink/out*100;
        printf("    飲品比例: %.2f%% $%.f\n",drink_p,drink);
    }
    if (transport > 0){
        transport_p = transport/out*100;
        printf("    交通比例: %.2f%% $%.f\n",transport_p,transport);
    }
    if (expense > 0){
        expense_p = expense/out*100;
        printf("    消費比例: %.2f%% $%.f\n",expense_p,expense);
    }
    if (entertainment > 0){
        entertainment_p = entertainment/out*100;
        printf("    娛樂比例: %.2f%% $%.f\n",entertainment_p,entertainment);
    }
    if (bill > 0){
        bill_p = bill/out*100;
        printf("    帳單比例: %.2f%% $%.f\n",bill_p,bill);
    }
    if (medcial > 0){
        medcial_p = medcial/out*100;
        printf("    醫療比例: %.2f%% $%.f\n",medcial_p,medcial);
    }
    if (other > 0){
        other_p = other/out*100;
        printf("    其他比例: %.2f%% $%.f\n",other_p,other);
    }
}
