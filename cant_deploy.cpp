#include<stdio.h>
#include<string.h>
main(){
	char a[25],b[25];
	scanf("%s %s",a,b);
	if(strcmp(a,"node") == 0 && strcmp(b,"-v") == 0){
		printf("true");
	}
	else{
		printf("false");
	}
}
