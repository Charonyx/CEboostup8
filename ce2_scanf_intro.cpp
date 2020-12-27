#include<stdio.h>
main(){
	char nick[10], time[6];
	int age;
	printf("Enter nickname : ");
	scanf("%s",nick);
	printf("Enter age : ");
	scanf("%d",&age);
	printf("Enter finished time : ");
	scanf("%s",time);
	
	printf("\nyour nickname is %s \nyour age is %d\nfinished time is %s",nick,age,time);	
}
