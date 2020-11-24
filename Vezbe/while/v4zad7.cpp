#include<stdio.h>


int main() {
	int n, i, broj, obrnuti, temp;
	i = 10;
	scanf("%d", &n);
	while(i <= n) {
		temp = i;
		obrnuti = 0;
		
		while(temp) {
			broj = temp % 10;
			obrnuti = obrnuti * 10 + broj;
			temp /= 10;
			
		}
		if(i == obrnuti) printf("%d\n", i);
		i++;
		
	}
	
	
	return 0;
}
