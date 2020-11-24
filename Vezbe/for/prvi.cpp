#include<stdio.h>
#include<math.h>
int main() {
	int n, suma;
	suma = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		suma += pow(i, 2);
	}
	printf("%d", suma);
	return 0;
}


