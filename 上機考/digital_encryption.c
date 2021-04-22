#include<stdio.h>
int main(){
	int E, K, t;
	while(scanf("%d %d", &E, &K) != EOF){
		if(E == 0 && K == 0)break;
		int add6 = -12 * E + 16;
		t = (K / 10) % 10;
		t = (t + add6) % 10;
		printf("%d", t);
		
		t = K % 10;
		t = (t + add6) % 10;
		printf("%d", t);
		
		t = (K / 1000) % 10;
		t = (t + add6) % 10;
		printf("%d", t);
		
		t = (K / 100) % 10;
		t = (t + add6) % 10;
		printf("%d\n", t);    
		//hi yozn
	}
	return 0;
}
