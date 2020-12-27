#include<stdio.h>
main(){
	double l;
	long n;
	scanf("%lf %ld",&l,&n);
	if(l>0){
		l-=(400.0*n);
		if(l<0)
			l=0;
		printf("LP: %.4lf",l);
	}
}
