#include<stdio.h>
#include<math.h>
main(){
	int i=0;
	float x[5],y[5],max=-1,s[10];
	
	scanf("%f,%f",&x[i],&y[i]);
	for(i=1;i<5;i++){
		scanf("%f,%f",&x[i],&y[i]);
		if(-100<x[i] && x[i]<100 && -100<y[i] && y[i]<100){
			s[i]sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2))
		}	
	}
	
	
	printf("%f",sqrt(pow(x[i]-x[i-1],2)+pow(y[i]-y[i-1],2)));
}
