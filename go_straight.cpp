#include<stdio.h>
#include<string.h>
main(){
	char text[100];
	int i=0,a[3]={0,0,0}; // 0cout+-straight 1left-right 2count-till3
	while(i<10){
		scanf(" %[^\n]",text);
		if(strcmp(text,"Go straight") == 0){
			a[0]++;
			if(a[0] >= 3){
				a[2] = 1;
			}	
		}
		else if(strcmp(text,"Go straight") != 0){
			a[0] = 0;
			a[1]++;
		}
		i++;
	}
	if(a[2] == 1)
		printf("Welcome to Chiang Mai!!!");
	else if(a[1] > 0 && a[1] < 10 && a[3] != 1)
		printf("%d minute.",10*(10-a[1]));
	else if(a[1] == 10)
		printf("Good job Mean!!!");	
}
