#include<stdio.h>
main(){
	int c; // count price
	float p;
	scanf("%d %f",&c,&p);
	if(c>=0 && p>=0){
		if(c>4 && p>600){
			printf("Promotion: Yes");
				p*=0.9;
		}
		else{
			printf("Promotion: No");
		}
	printf("\nPrice: %.2f baht",p);
	}
}
