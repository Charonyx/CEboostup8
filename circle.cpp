#include<stdio.h>
int main(){
	float r;
	scanf("%f",&r);
	if(r>=0)
		printf("%f",r*r*22.0/7);
	else
		printf("Error");	
	return 0;
	
}
/*	
#include<stdio.h>
#define pi 22.0/7.0
int main(){
	float r;
	scanf("%f",&r);
	printf("%f",pi*r*r);
	return 0;
}
*/
