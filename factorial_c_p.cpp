#include<stdio.h>
main(){
	unsigned long n,r,n2,r2,i,ans,m=1;
	char t;
	scanf("%lu %c %lu",&n,&t,&r);
	n2=n;
	r2=r;
	t-=32;
	if(n==0){
		n=1;
	}
	else if(r==0){
		r=1;
	}
	if(0<r && r<=n && n<=16 && (t=='C' || t=='P')){
		
		for(i=1;i<=n-r;i++){
			m*=i;
		}
		printf("\nm %lu ",m);		
		for(i=1;i<n;i++){
			n*=i;
		}
		printf("\nn %lu",n);

		if(t=='C'){
			for(i=1;i<r;i++){
				r*=i;
			}
			printf("\nr %lu",r);
			ans=n/m/r;
		}
		else if(t=='P'){
			ans=n/m;
		}
		printf("%lu%c%lu = %lu",n2,t,r2,ans);
	}
	else{
		printf("%lu%c%lu = Error",n2,t,r2);
	}
}
