#include<stdio.h>
#include<stdbool.h>  

int main() {
	bool x = false; // variable initialization.  
	int n, delilac;
	scanf("%d", &n);
	
	delilac = 2;
	while( n > delilac) {
		if(n % delilac == 0) x = true;
		delilac++;
	}
	
	if(x) printf("Broj nije prost");
	else printf("Broj je prost");
	
	return 0;
}
