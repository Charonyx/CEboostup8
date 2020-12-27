#include<stdio.h>
main(){
	int a,b,sum,count=0;
	scanf("%d %d",&a,&b);
	sum = a+b;
	while(sum != 0){
		sum /= 10;
		count++;
	} 
	printf("%d",count);
}
