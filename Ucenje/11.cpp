#include<stdio.h>

int main() {
	int n, suma;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) suma += i;
	}
	
	printf("Suma %d", suma);
	
}
