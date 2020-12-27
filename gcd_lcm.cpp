#include<stdio.h>
main(){
	long long a,b,i,gcd;
	scanf("%lld %lld",&a,&b);
	if(a>=2 && b>=2 /* && a<=5000 && b<=5000*/){
		for(i=1; i <= a && i <= b; i++)
	    {
	        if(a%i==0 && b%i==0){
	            gcd = i;	        	
			}

	    }
	    printf("%lld %lld",gcd,a*b/gcd);
	}
}
