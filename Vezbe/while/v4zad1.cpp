#include<stdio.h>

int main() {
	
	int n, suma, br;
	suma = 0;
	br = 0;
	scanf("%d", &n);
	while(br <= n) {
		suma += br;
		br++;
	}
	
	printf("Suma : %d", suma);
	return 0;
}
