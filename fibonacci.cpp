#include<stdio.h>
main(){
	unsigned long n=0,num,a[1000]={0,1},i; 
	scanf("%lu",&num);
	for(n=0;n<num;n++){
		a[n+2]=a[n+1]+a[n];	
	}printf("%lu",a[n]);
}
