#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char num[30];
	scanf("%s",num);
	int n = atoi(num);
	if(n != '\0'){
		for(int i=1;i<=12;i++){
			printf("%d x %d = %d\n",n,i,n*i);
		}
	}
	else{
		printf("Error");
	}
}
