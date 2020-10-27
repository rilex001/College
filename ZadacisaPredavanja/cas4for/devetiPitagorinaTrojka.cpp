#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	for(int a = 1; a <= n; a++) {
		for(int b = a; b <= n; b++) {
			int c = round(sqrt(a*a+b*b));
			if (a*a + b*b == c*c) printf("(%d,%d,%d)\n", a,b,c);
		}
	}
	
	return 0;
}
