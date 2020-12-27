#include<stdio.h>
main(){
	double w,h,bmi;
	scanf("%lf %lf",&w,&h);
	
	if(w>0 && h>0){
		bmi = w/h/h*10000.0;
		printf("%lf",bmi);
		if(bmi >= 30.0){
			printf("\nObesity");
		}
		else if(bmi >= 25.0){
			printf("\nOverweight");
		}
		else if(bmi >= 18.5){
			printf("\nNormal");
		}
		else{
			printf("\nUnderweight");
		}
		
	}
	
}
