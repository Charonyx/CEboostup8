#include<stdio.h>
main(){
	int i;
	float n,a[i],min=10000000,max=-10000000;
	for(i=0;i<3;i++){
		scanf("%f",&n);
		a[i] = n;
		if(n>=0){
			if(n > max){
				max = n;
			}
			if(n < min){
				min = n;
			}					
		}
	}
	for(i=0;i<3;i++){
		if(a[i] != max && a[i] != min && a[i] > 0){
			printf("%.2f",a[i]);
		}
	}
}
