#include<stdio.h>
main(){
	int x,i=0,m[i],y,s;
	scanf("%d %d %d",&x,&y,&s);	
	if(x>=0 && s>=0 && y>=0){
		while(m[i]<=s){
			m[i]=x+i*s;
			if(m[i]<=y)
				printf("%d\n",m[i]);
			else
				printf("%d\n",y);
				break;
			i++;
						
		}
	}
	else if(x==0 && s==0){
		printf("Go to hell");
	}
}
