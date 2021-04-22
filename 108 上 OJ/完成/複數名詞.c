#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int form,word,i,j,cmp,fail = 0;
    char forms[40][21],test[100][21];
    scanf("%d %d",&form,&word);
    for(i = 0;i < 2*form;i++){
        scanf("%s",forms[i]);
    }

    for(i = 0;i < word;i++){
        fail = 0;
        scanf("%s",test[i]);
        for(j = 0;j < form*2;j+=2){
            cmp = strcmp(test[i],forms[j]);
            if(cmp == 0){
                printf("%s\n",forms[j+1]);
                fail = 1;
                break;
            }
        }
        while(fail == 0){
            if((test[i][strlen(test[i])-1] == 'y')&&(test[i][strlen(test[i])-2] != 'e'&&test[i][strlen(test[i])-2] != 'a'&&test[i][strlen(test[i])-2] != 'i'&&test[i][strlen(test[i])-2] != 'o'&&test[i][strlen(test[i])-2] != 'u')){
                for(j = 0;j < strlen(test[i])-1;j++){
                    printf("%c",test[i][j]);
                }
                printf("ies\n");
                fail = 1;
            }
            else if(test[i][strlen(test[i])-1] == 'o'||test[i][strlen(test[i])-1] == 'x'||test[i][strlen(test[i])-1] == 's'){
                for(j = 0;j < strlen(test[i]);j++){
                    printf("%c",test[i][j]);
                }
                printf("es\n");
                fail = 1;
            }
            else if((test[i][strlen(test[i])-2] == 'c'||test[i][strlen(test[i])-2] == 's')&&(test[i][strlen(test[i])-1] == 'h')){
                for(j = 0;j < strlen(test[i]);j++){
                    printf("%c",test[i][j]);
                }
                printf("es\n");
                fail = 1;
            }
            else if(test[i][strlen(test[i])-1] == 'f'){
                for(j = 0;j < strlen(test[i])-1;j++){
                    printf("%c",test[i][j]);
                }
                printf("ves\n");
                fail = 1;
            }
            else{
                for(j = 0;j < strlen(test[i]);j++){
                    printf("%c",test[i][j]);
                }
                printf("s\n");
                fail = 1;
            }
        }
    }

    /*for(i = 0;i < word;i++){
        printf("¿é¤J%d%s\n",i,test[i]);
    }
    for(i = 0;i < 2*form;i++){
        printf("ªí®æ%d%s\n",i,forms[i]);
    }*/
}
