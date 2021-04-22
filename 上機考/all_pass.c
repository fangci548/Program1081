#include<stdio.h>
int main(){
	int n, s;
	scanf("%d", &n);
	int i;
	unsigned char r = 0b11111111;
	for(i = 0; i < n; i++){
		scanf("%d", &s);
		unsigned char t = 0b00000001 << (s - 1);
		r = t ^ r;
	}
	printf("%X", r);
	for(i = 0; i < 8; i++)
		printf(" %d", (r >> i) & 0b00000001);
	printf("\n");
		
	return 0;
}
