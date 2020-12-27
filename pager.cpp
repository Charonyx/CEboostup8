#include<stdio.h>
#include<string.h>
main(){
	char text[1000];
	int count,count1;
	float sum=0;
	scanf("%[^\n]",text);
	count = strlen(text);
	count1 = count;
	if(count/20 > 0){
		sum+=18.5*int(count/20);
		count%=20;
	}
	if(count/8 > 0){
		sum+=6.5*int(count/8);
		count%=8;
	}
	if(count/3 > 0){
		sum+=3.0*int(count/3);
		count%=3;
	}
	if(count/1 > 0){
		sum+=1.5*count;	
	}
	printf("Text's length is : \"%d\"\nTotal price is : %.2f Baht\\.-",count1,sum);
	
}
