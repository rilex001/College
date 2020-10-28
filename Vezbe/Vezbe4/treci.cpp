#include<stdio.h>
#define true 1
#define false 0

int main() {
	int n, ostatak;
	scanf("%d" , n);
	n = true;
	for(int i = n; i > 0 ; i /= 10 ) {
		ostatak = i % 10;
		if(ostatak % 3 == 0 ||  ostatak % 7 == 0 ) n = false; 		
	}
	
	if(n == true) {
		printf("Broj je poseban");
	} else {
		printf("Broj nije poseban");
	}
	
	
}
