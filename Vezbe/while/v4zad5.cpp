#include<stdio.h>

int main() {
	int n=1, a, b, c=0, limit;
	int m = 2;
	scanf("%d", &limit);
	while(c < limit) {
		
		
		while( n < m ) {
			a = m * m - n * n;
			b = 2 * m * n;
			c = m * m + n * n;
			
			if(c > limit) break;
			
			printf("%d %d %d\n", a, b, c);
			n++;
		}
		m++;
		
	}
	
}
