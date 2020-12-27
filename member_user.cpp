#include<stdio.h>
int main(){
	char name[1000];
	scanf("%[^\n]",name);
	printf("Hello %s \\(\"^\")/!!!",name);
	return 0;
}
