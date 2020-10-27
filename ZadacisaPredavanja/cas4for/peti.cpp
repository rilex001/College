#include<stdio.h>

int main() {
	int n, suma, a;
	suma = 0;
	scanf("%i", &n);
	for(int i = 0; i < n; i++){
		scanf("%i", &a);
		suma += a;
	}
	printf("%d", suma);
	return 0;
}
