#include<stdio.h>
main(){
	unsigned int  i=0,n;
	char text[300];
	scanf("%s %u",text,&n);
	for(i=0;i<n+7;i++){
		printf("%s\n",text);
	}
}
