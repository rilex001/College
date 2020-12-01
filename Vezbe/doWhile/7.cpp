#include<stdio.h>
#include <stdlib.h>

#include<stdbool.h>

int main() {
	
	
	int n, broj, a, b, c, delilac = 2, br= 0;
	srand(time(NULL));

	scanf("%d", &n);
	bool jeProst = true;
	for(int i = 0, a = rand()%101, b = rand()%101, c = rand()%101 ; i < n; i++) {
		broj = a+b+c;
		printf("a: %d b: %d c: %d \n", a, b,c);
		while (jeProst && delilac < broj) {
        if (broj%delilac == 0) jeProst = false;
        else delilac++;
    	}
    	
    	if(jeProst) br++;
	}
	
	
	
	 printf("Brojac %d ", br);
    
	
}
