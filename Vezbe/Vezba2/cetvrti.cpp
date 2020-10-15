#include <stdio.h>
#include <math.h>
int main() {
	
	
	int n;
	
	scanf("%d", &n);

	if(n % 3 == 0 && n % 7 == 0 && n % 13 != 0 || n % 49 == 0) printf("Broj je srecan");
	else printf("Broj nije srecan");
	
	
	return 0;
}
