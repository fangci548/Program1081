#include<stdio.h>

void monthsearch(float food,float drink,float transport,float expense,float entertainment,float bill,float medcial,float takein,float other){
    float food_p,drink_p,transport_p,expense_p,entertainment_p,bill_p,medcial_p,takein_p,other_p;
    int month,num,n,i;
    float out,income,balance;

    printf("��ܤ��\n");
    scanf("%d",&month);
    out = food + drink + transport + expense + entertainment + bill + medcial + other;
    income = takein;
    balance = out + income;
    printf("%d�� �`��X %.f\n     �`���J %.f",month,out,income);
    printf("\t���l %.f\n\n",balance);
    printf("�U�����O���:\n");
    if (food > 0){
        food_p = food/out*100;
        printf("    �������: %.2f%% $%.f\n",food_p,food);
    }
    if (drink > 0){
        drink_p = drink/out*100;
        printf("    ���~���: %.2f%% $%.f\n",drink_p,drink);
    }
    if (transport > 0){
        transport_p = transport/out*100;
        printf("    ��q���: %.2f%% $%.f\n",transport_p,transport);
    }
    if (expense > 0){
        expense_p = expense/out*100;
        printf("    ���O���: %.2f%% $%.f\n",expense_p,expense);
    }
    if (entertainment > 0){
        entertainment_p = entertainment/out*100;
        printf("    �T�֤��: %.2f%% $%.f\n",entertainment_p,entertainment);
    }
    if (bill > 0){
        bill_p = bill/out*100;
        printf("    �b����: %.2f%% $%.f\n",bill_p,bill);
    }
    if (medcial > 0){
        medcial_p = medcial/out*100;
        printf("    �������: %.2f%% $%.f\n",medcial_p,medcial);
    }
    if (other > 0){
        other_p = other/out*100;
        printf("    ��L���: %.2f%% $%.f\n",other_p,other);
    }
}
