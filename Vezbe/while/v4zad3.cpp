#include<stdio.h>
#include <stdbool.h> 

int main() {
	bool a = true;
	int n, k;
	scanf("%d", &n);
	
	while(n != 0) {
		k = n %  10;
		if(k % 3 != 0 && k % 7 != 0) a = false; 
		
		n /= 10;	
	}
	
	if(a) printf("Broj je poseban");
	else printf("Broj nije poseban");
	
	return 0;
	
}
