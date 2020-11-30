#include<stdio.h>


int main() {
	int n, i, broj, obrnuti, temp;
	scanf("%d", &n);
	for(int i = 10; i <= n; i++) {
		temp = i;
		obrnuti = 0;
		
		while(temp) {
			broj = temp % 10;
			obrnuti = obrnuti * 10 + broj;
			temp /= 10;
			
		}
		if(i == obrnuti) printf("%d\n", i);
		
	}
	
	
	return 0;
}
