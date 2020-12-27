#include<stdio.h>
int main(){
	int a,b;
	char name[20];
	scanf("%s %d %d",name,&a,&b);
	printf("%s %d%%",name,100*b/a);
	return 0;
}
