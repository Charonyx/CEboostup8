#include<stdio.h>
#include<string.h>
main(){
	long n,min=1000000,max=-1000000,sum=0;
	double i=0.0;
	while(n >= max){	
		scanf("%ld",&n);
		sum+=n;
		i++;
		if(n > max){
			max=n;
		}
		if(n < min){
			min=n;
		}			
	}
	printf("%ld %ld %ld %.2lf",sum,min,max,sum/i);
}
