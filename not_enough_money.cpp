#include<stdio.h>
main(){
	float n;
	scanf("%f",&n);
	if(n >= 180){
		printf("Yes %.2f Baht",n-180.0);
	}
	else{
		printf("No");
	}
}
