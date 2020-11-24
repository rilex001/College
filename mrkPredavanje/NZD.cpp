#include<stdio.h>

int main() {
	int a, b, nzd, delilac;
	scanf("%d%d", &a, &b);
	
	nzd = 1;
	delilac = 2;
	
	while( delilac <= a && delilac <= b) {
		if(a % delilac == 0 && b % delilac == 0) nzd =delilac;
		delilac++;
	}
	
	printf("%d", nzd);
	
}
