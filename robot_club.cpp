#include<stdio.h>
main(){
	int i=1,n,x=0,y=0;
	char c;
	scanf("%d",&n);
	if(n >= 1 && n <= 100){
		while(i <= n){
			scanf(" %c",&c);
			if(c == 'S'){
				y+=100;
				x+=200;
			}
			else if(c == 'I'){
				x-=211;
				y-=59;
			}
			else if(c == 'A'){
				y+=420;
			}
        	i++;
		}
//		printf("%d",i);
		if((-2000<x && x<2000) && (-2000<y && y<2000))
			printf("%d %d ",x,y);
		else
			printf("I’m dead");		
	}

}
