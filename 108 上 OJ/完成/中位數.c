
#include<stdio.h>
#include<string.h>
void q96vm4(long long int str[],long long int n){
    long long int i,tmp;
    if(str[n] < str[n-1]){
         for(i = 0;i < n;i++){
            if(str[i] > str[n]){
                tmp = i;
                break;
            }
         }
         str[n+1] = str[n];
         for(i = 0;i < n-tmp;i++){
            str[n-i] = str[n-1-i];
         }
         str[tmp] = str[n+1];
    }


}

int main(){
	long long int str[10000],n,num = 0;
	while(scanf("%lld",&n) != EOF){
		str[num] = n;

		if(num== 0){
			printf("%lld",str[num]);
		}
		else{
            q96vm4(str,num);
			if((num+1)%2 == 0){
				printf("%lld",(str[num/2]+str[num/2+1])/2);
			}
			else{
				printf("%lld",str[num/2]);
			}
		}
		printf("\n");
		num++;
	}

}
