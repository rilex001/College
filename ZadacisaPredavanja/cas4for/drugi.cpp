#include<stdio.h>

int main() {
	
	int n;
	double suma;
	suma = 0.0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		suma += 1.0 / (i * (i + 1) * (i + 2));
	}
	
	printf("Suma: %.4lf", suma);
	return 0;
}
