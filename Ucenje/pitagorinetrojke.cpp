//Pitagorine trojke 

#include <stdio.h>
#include <math.h>
int main() {
	int n, a, b, c;
	
	
	scanf("%d", &n);
	
	for( a = 1; a <= n; a++) {
		for(b =a; b <= n; b++) {
			c = round(sqrt(a*a + b*b));
			if (a*a + b*b == c*c) printf("(%d,%d,%d)\n", a,b,c);
		}
	}
	
	return 0;
}



