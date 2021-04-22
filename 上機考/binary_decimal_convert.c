#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, j, k;
	double f;
	for(i = 0; i < n; i++){
		scanf("%lf %d", &f, &k);
		printf("0.");
		for(j = 0; j < k; j++){
			f *= 2;
			printf("%d", (int)f);
			f -= (int)f;
		}
		printf("\n");
	}
	return 0;
}
