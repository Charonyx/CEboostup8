#include<stdio.h>
main(){
	long n,i=0;
	double m;
	scanf("%lf %ld",&m,&n);
	if(n<=10000 && n<m && m<=1000000){
		while(1){
			m=(m-n)*1.05;
			if(m<=0){
				printf("0.00");
				break;
			}
			printf("%.2lf\n",m);
//			i++
		}
	}
}
