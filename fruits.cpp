#include<stdio.h>
main(){
	int n;
	float sum=0,k,b; //kilo baht
	scanf("%d",&n);
	if(n >= 0){
		for(int i=0;i<n;i++){
			scanf("%f %f",&k,&b);
			sum+=k*b;
		}	
		if(sum >= 2000){
			sum-=200;
		}
		else if(sum >= 400){
			sum-=sum*0.1;
		}
		else if(sum >= 200){
			sum-=sum*0.05;
		}
		printf("%.2f",sum);
	
	}

}
