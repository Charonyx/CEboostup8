#include<stdio.h>
main(){
	int h,x,y,i=0;
	scanf("%d %d %d",&h,&x,&y);
	if(x > y && h>=0 && x>=0 && y>=0){
		while(h>=0){
			i++;
			if(h<=x){
				break;
			}
			h-=x;
			h+=y;			
		}
		printf("%d",i);
	}
}
