#include<stdio.h>
main(){
	unsigned int i=0,n,sum=0,a[6];
	scanf("%u",&n);
//	if(n>=999999){
		while(n != 0){
			a[i]=n%10;
			sum+=a[i];
			n/=10;
			printf("%u",a[i]);
			i++;
		}
		if(a[i-1]%2==0){
			printf(":Even:%u",sum);
		}
		else{
			printf(":Odd:%u",sum);
		}
//	}
}
