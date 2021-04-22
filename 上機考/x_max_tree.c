#include<stdio.h>
int main(){
	int n, i, j, k, m;
	int N, H;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d %d", &N, &H);
		if(N < 2 || N > 5 || H < 3 || H > 6){
			printf("ERROR\n\n");
			continue;
		}
		int b_total = 2 * H + 1 + 4 * (N - 1);
		printf("%*c\n", b_total / 2, '#');
		for(j = 0; j < N; j++){ //´X¼h 
			for(k = 0; k < 2 * j + H - 1; k++){
				printf("%*c", b_total / 2 - (k + 1), '#');
				for(m = 0; m < 2 * (k + 1); m++)
					printf("#");
				printf("\n");
			}
		}
		for(k = 0; k < 5; k++){
				printf("%*c||\n", b_total / 2 - 1, '|');
				
		}
		printf("\n");
	}
} 
