#include<stdio.h>
main(){
	int i=0,n,sum=0,sum2=0;
	while(n != 0){
		
		scanf("%d",&n);
		if(n%2 == 0){
			sum+=n;
		}
		if(n%2 == 1 || n%2 == -1){
			sum2+=n;
		}
		i++;
	}
	printf("%d\n%d",sum2,sum);
}
