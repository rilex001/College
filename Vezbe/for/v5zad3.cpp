#include<stdio.h>
#include<stdbool.h>


/// 3 i 7 samo treba
int main() {
	int n, br, zadnjacifra;
	bool poseban = true;
	scanf("%d", &n);
	
	for( br = n  ; br > 0 && poseban; br /= 10) {
		zadnjacifra = br % 10;
		if(zadnjacifra % 3 == 0 && zadnjacifra % 7 == 0) poseban = true; 
		else {
			poseban = false; 
			printf("Broj nije poseban", n);
		}	
	}
	
	if(poseban) printf("Broj je poseban", n);
	
	return 0;
	
	
}


