#include<stdio.h>
main(){
	int s,i;
	scanf("%d",&s);
	if(s >= 1){
		printf("* ");
	}
	if(s >= 2){
		printf("\n* * ");
	}
	if(s >= 3){
		printf("\n* * * ");
	}
	if(s >= 4){
		printf("\n* * * * ");
	}
	if(s >= 5){
		printf("\n* * * * * ");
	}
	if(s >= 6){
		printf("\n* * * * * * ");
	}
	if(s >= 7){
		printf("\n* * * * * * * ");
	}
	if(s >= 8){
		printf("\n* * * * * * * * ");
	}
	if(s >= 9){
		printf("\n* * * * * * * * * ");
	}
	if(s >= 10){
		printf("\n* * * * * * * * * * ");
	}
	if(s >= 10)
		printf("OMG! TOO MUCH CODING T^T");
}
