#include<stdio.h>
main(){
	int age;
	scanf("%d",&age);
	if(age>=0 && age<12){
		printf("Kid");
	}
	else if(age>=12 && age<21){
		printf("Teen");
	}
	else if(age>=21 && age<61){
		printf("Adult");
	}
	else if(age>=61){
		printf("Old");
	}
	else{
		printf("Error");
	}
}
