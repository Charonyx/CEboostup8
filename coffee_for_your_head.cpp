#include<stdio.h>
main(){
	int a,x,y,i=0;
	scanf("%d %d %d",&a,&x,&y);
	if(x > y && a>=0 && x>=0 && y>=0){
		while(a>=0){
			i++;
			if(a<=x){
				break;
			}
			a-=x;
			a+=y;			
		}
		printf("%d",i);
	}
}
