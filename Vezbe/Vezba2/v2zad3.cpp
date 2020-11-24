#include<stdio.h>

int main() {
	
	int n, j, d, s, h;
	
	scanf("%d", &n);
	
	j = n % 10;
	d = (n % 100) / 10;
	s = (n / 100) % 10;
	h = n / 1000;
	//	printf("%d%d%d%d", j, d, s, h);
	if(j == h && d == s) printf("Broj je palindrom");
	else printf("Broj nije palindrom");
	return 0;
}
