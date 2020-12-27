#include<stdio.h>
#include<math.h>
main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	if(a>=0 && b>=0){
		a/=100.0;
		b/=100.0;
		printf("%.2lf",(6.0*sqrt(3.0/4)*a*a)+(6.0*a*b));		
	}

}
