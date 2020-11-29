#include<stdio.h>


int main(){
	
int n,min,max;

scanf("%d",&n);
max = n;
min = n;

for(int i = 0 ; n!=0 ;  i++){    
	scanf("%d",&n);
	if(n < min) min = n;
    if(n > max) max = n;      
}


printf("max=%d min=%d",max,min);
return 0;
}
