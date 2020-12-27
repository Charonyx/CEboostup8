#include<stdio.h>
main(){
	unsigned long long i,j,n,fac[i];
	for(i=0;i<2;i++){
		scanf("%llu",&n);
		if(n>0){
			fac[i]=1;
			for(j=1;j<=n;j++){
				fac[i]*=j;
			}			
		}
		else if(n==0){
			fac[i]=1;
		}
	}
	for(i=0;i<2;i++){
		printf("%llu\n",fac[i]);
	}


	
}
