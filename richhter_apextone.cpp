#include<stdio.h>
main(){
	char text[1000];
	int i=0,a[5]={0,0,0,0,0},count=0;
	scanf("%s",text);
	while(text[i] != '\0'){
		if(text[i]=='H' || text[i]=='h'){
			a[0]++;
			if(a[0]==3)
				count++;
		}
		else if(text[i]=='C' || text[i]=='c'){
			a[1]++;
			if(a[1]==3)
				count++;
		}
		else if(text[i]=='S' || text[i]=='s'){
			a[2]++;
			if(a[2]==3)
				count++;
		}
		else if(text[i]=='Q' || text[i]=='q'){
			a[3]++;
			if(a[3]==3)
				count++;
		}
		else{
			a[4]++;
			if(a[4]==3){
				a[0]=0;
				a[1]=0;
				a[2]=0;
				a[3]=0;				
			}
		}
	i++;
	}
	printf("Rockets Salvo Count: %d",count);
}
