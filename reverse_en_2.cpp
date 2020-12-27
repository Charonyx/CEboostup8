#include<stdio.h>
main(){
	int year;
	scanf("%d",&year);
	if(year >= 0){
		year %= 4;
		if(year == 0){
			printf("366");
		}
		else{
			printf("365");
		}
	}
	else{
		printf("error");
	}
}
