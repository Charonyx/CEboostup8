#include<stdio.h>
main(){
	int a,b,c,d,temp,temp2;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	temp=a;
	a=b;
	temp2=c;
	c=temp;
	temp=d;
	d=temp2;
	b=temp;
	
	printf("a=%d b=%d c=%d d=%d",a,b,c,d);
}
