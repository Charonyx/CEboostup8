#include<stdio.h>
#include<math.h>
main(){
 	double r,r2;
 	scanf("%lf %lf",&r,&r2);
 	if(r >= 0 && r2 >= 0){
 		r = abs(pow(r/2,3)-pow(r2/2,3));
 		printf("%.3lf",M_PI*r/3.0*4.0);
	 }
}
