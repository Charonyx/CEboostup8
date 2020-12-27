#include<stdio.h>
main(){
	int i=0,j=0;
	double min=100000000000000000,max=-100000000000000000,sum=0,n;
	for(i=0;i<10;i++){
		scanf("%lf",&n);
		
		if(n > max){
			max = n;
		}
		if(n < min){
			min = n;
		}
		sum+=n;
	}
	printf("MAX: %.2lf\nMIN: %.2lf\nSUM: %.2lf\nAVG: %.2lf\n",max,min,sum,sum/10.0);
}
