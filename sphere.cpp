#include<stdio.h>
main(){
	double r;
	scanf("%lf",&r);
	//printf("%lf\n",22.0/7);
	if(r>=0)
		printf("%.8lf",r*r*r*3.1415926535897932384626433*4/3);
	else
		printf("Error");
}
