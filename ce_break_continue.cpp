#include<stdio.h>
main(){
	int n,sum=0;
	while(1){
		scanf("%d",&n);
		if(n == -1){
			break;
		}
		sum+=n;
	}
	printf("%d",sum);
}
