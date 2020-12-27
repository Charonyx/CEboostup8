#include<stdio.h>
main(){
	char a,b;
	scanf("%c %c",&a,&b);
	if(a == b || a-b == 32 || b-a == 32){
		printf("%c' and '%c' are the same character.",a,b);
	}
	else{
		printf("TOO DIFFERENCE!!");
	}
}
