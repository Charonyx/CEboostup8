#include<stdio.h>
#include<math.h>
main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(fabs(a-b)>0 && fabs(c-b)>0)
		printf("%.2lf \n%.2lf \n%.2lf",fabs(a-b),fabs(c-b),fabs(a-c));
}
