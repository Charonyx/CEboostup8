#include<stdio.h> 

int main() { 
	float a,b;
	scanf("%f %f",&a,&b);
	if(a>=0 && b>=0)
    	printf("Area = %f x %f = %f",a,b,a*b);
    else
    	printf("Error");
    return 0;
}
