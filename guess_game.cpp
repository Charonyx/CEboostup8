#include<stdio.h>
main(){
	int a,n;
	scanf("%d",&a);
	while(1){
		scanf("%d",&n);
		if(n>a)
			printf("Too high.\n");
		else if(n<a)
			printf("Too low.\n");
		else
			break;
	}
	printf("Correct ! It's %d.",a);
}
