#include<stdio.h>
main(){
	unsigned long long i,n,fac=1;
	scanf("%llu",&n);
	if(n>0 && n<=20){
		for(i=1;i<=n;i++){
			fac*=i;
//			printf("%ld %ld ",i,fac);
			
		}	printf("%llu",fac);			
	}
	else if(n==0){
		fac=1;
		printf("%llu",fac);	
	}
	else{
		printf("Error");
	}


}
