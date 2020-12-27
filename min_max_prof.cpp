#include<stdio.h>
main(){
	unsigned int i=0,n,min=100,max=0;
	for(i=0;i<10;i++){
		scanf("%u",&n);
		if(n >= 0 && n <= 100){
			if(n > max){
				max = n;
			}
			if(n < min){
				min =n;
			}
		}
	}
	printf("%u %u",min,max);
}
