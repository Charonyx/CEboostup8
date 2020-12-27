#include<stdio.h>
#include<math.h>
main(){
	long n,p=1,i;
	scanf("%ld",&n);
	if(n>1){
		for(i=2;i<=sqrt(n);i++){
			if(n % i == 0){
				p = 0;
				break;
			}
		}
		if(p == 1){
			printf("Yes");
		}	
		else{
			printf("No");
		}		
	}
	else{
		printf("No");
	}	
}
