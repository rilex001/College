#include<stdio.h>
#include<math.h>
int main() {
	int a, b,n;
	float c;
	a = 1;
	b = 1;
	c = 1.0;
	scanf("%d", &n);
	while( a <= n && b <= n ) {
		if(c*c == a*a + b*b ) printf("%d %d %d /n", a,b,c);
		a++;
		b++;
	}
}
