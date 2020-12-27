#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char num[300];
	scanf("%s",num);
	long n = atoi(num);
	
	if(n != '/0' && (n/2)%7 > 0){
		printf("Takes about %ld weeks %ld days",n/14,(n/2)%7);
	}
	else{
		printf("ERROR");
	}
	
}
