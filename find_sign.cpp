#include<stdio.h>
main(){
	int i,a,b,c;
	char p[i];
	scanf("%d",&c);
	for(i=0;i<2;i++){
		scanf("%d %d",&a,&b);
		if(a+b == c){
			p[i]='+';
		}
		else if(a-b == c || b-a == c){
			p[i]='-';
		}
		else if(a*b == c){
			p[i]='*';
		}
		else if(a/b == c || b/a == c){
			p[i]='/';
		}		
	}
	for(i=0;i<2;i++){
		printf("%c\n",p[i]);
	}
}
