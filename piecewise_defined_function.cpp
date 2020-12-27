#include<stdio.h>
main(){
	double x;
	scanf("%lf",&x);
	
	if(x >= 2)
		printf("%.2lf",5.0);
	else if(x > -1)
		printf("%.2lf",x+4.0);
	else
		printf("%.2lf",(x*x)+1.0);
}
