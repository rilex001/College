#include<stdio.h>
#include<math.h>

int main() {
	
int n, suma= 0;
scanf("%d", &n);

for(int i = 0; i < n; i++) {
	suma += pow(i, 2);
}


printf("Suma %d", suma);
return 0;


}
