#include<stdio.h>
main(){
	unsigned int n;
	scanf("%u",&n);
	
	if(n > 5){
		printf("%.2f baht",100+(n-5)*18.5);
	}
	else if(n >= 0){
		printf("100.00 baht");
	}

 
}
