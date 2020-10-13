#include <stdio.h>

int main() {
	int broj, j,d,s;
	scanf("%d", &broj);
	j = broj % 10;
	d = (broj % 100) / 10;
	s = broj / 100;
	printf("%d%d%d", j, d, s);
}
