#include<stdio.h>
main(){
	int i=0,a,b,sum=0;
	scanf("%d %d",&a,&b);
	if(a>b){
		i=a;
		a=b;
		b=i;
	}
	for(i=a;i<=b;i++){
		sum+=i;
	}
	printf("%d",sum);
}
