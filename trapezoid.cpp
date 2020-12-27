#include<stdio.h>
main(){
	float x,y,h;
	scanf("%f %f %f",&x,&y,&h);
	if(x>0 && y>0 && h>0 && x!=y)
		printf("Area of Trapezoid is %.2f",1.0/2*h*(x+y));
	else
		printf("Error");
}
