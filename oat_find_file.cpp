#include<stdio.h>
main(){
	long n,i,a[10000],c=0;
	scanf("%ld",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
		if(a[i]%2==1 || a[i]%-2==-1){
		//	printf("%ld ",a[i]);
			c++;
		}
	}
	printf("%ld",c);
}
