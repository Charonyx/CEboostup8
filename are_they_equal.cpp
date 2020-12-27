#include<stdio.h>
main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	printf("%d and %d are equal.\nThis sentence is ",a,b);
	if(a==b)	
		printf("True.\n");
	else		
		printf("False.\n");
		
	printf("%d and %d are equal.\nThis sentence is ",b,c);
	if(b==c)	
		printf("True.\n");
	else		
		printf("False.\n");
		
	printf("%d and %d are equal.\nThis sentence is ",a,c);
	if(a==c)
		printf("True.\n");
	else
		printf("False.\n");	
}
