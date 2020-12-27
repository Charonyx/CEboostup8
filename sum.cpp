#include<stdio.h>
main(){
	int n,i,sum=0;
	scanf("%d",&n);
	if(n > 0){
		for(i=1;i<=n;i++){
			sum+=i;
//			printf(";p %d\n ",sum);
		}
		printf("%d",sum);
	}
	else
		printf("Error");
}
