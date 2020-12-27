#include<stdio.h>
#include<math.h>
main(){
	int a,b,c,sum=0;
	scanf("%d %d",&a,&b);
	if(a>b){
		c=b;
		b=a;
		a=c;
	}
	for(c=a;c<=b;c++){
		sum+=pow(c,2);
	}
	printf("%d",sum);
}
