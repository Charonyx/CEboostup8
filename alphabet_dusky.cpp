#include<stdio.h>
main(){
	int i,n[i];
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
		n[i]+=96;
	}
	for(i=0;i<5;i++){
		printf("%c\n",n[i]);
	}
}
