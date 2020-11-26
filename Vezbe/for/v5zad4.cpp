//#include<stdio.h>
//int main(){
//int n,min,max;
//max = 0;
//min = 0;
//
//for(n = min ; n !=0  ;  ){    
//	scanf("%d",&n);
//	if(n < min) {
//		min=n;
//	} 
//    if(n > max) {
//    	max=n;  	
//	}     
//}
//
//printf("max=  %d min=%d",max,min);
//
//
//return 0;
//
//
//}


#include<stdio.h>
int main(){
int n,min,max;
max = 0;

for(int i = 0 ; n!=0 ;  i++){    
	scanf("%d",&n);
	if(n < min) min=n;
    if(n > max) max=n;      
}
printf("max=%d min=%d",max,min);
return 0;
}
