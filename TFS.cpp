#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	
	if(n%3 == 0 ){
		if(n%5 == 0){
			if(n%7 == 0){
				printf("7");
			}
			else{
				printf("3");
			}
		}
		else{
			if(n%7 == 0){
				printf("5");
			}
			else{
				printf("1");
			}
		}
	}
	else{
		if(n%5 == 0){
			if(n%7 == 0){
				printf("6");
			}
			else{
				printf("2");
			}
		}
		else{
			if(n%7 == 0){
				printf("4");
			}
			else{
				printf("0");
			}
		}
	}
}
