#include <stdio.h>


int main() {
	int n;
	long long dupFakt;
	dupFakt = 1;
	scanf("%d", &n);
	
	for (int i = n; i > 0; i -= 2) {
		dupFakt *= i;
	}
	printf("%d!! = %lld \n ", n, dupFakt);
	
	return 0;
	
}
