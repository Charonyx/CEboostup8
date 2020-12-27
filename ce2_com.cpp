#include<stdio.h>
main(){
	char type[10];
	printf("Please Type \"computer\" : ");
//	scanf("%s",type);
//	printf("%.3s",type);	

	scanf("%[^pP]",type);
	printf("%s",type);
}
