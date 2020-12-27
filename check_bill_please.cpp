#include<stdio.h>
int main(){
	float bill;
	scanf("%f",&bill);
	//bill=(0.07*bill)+bill;
	//printf("%f",bill);
	printf("Total cost: %.2f Baht",(0.1*((0.07*bill)+bill)+(0.07*bill)+bill);
	return 0;
}
