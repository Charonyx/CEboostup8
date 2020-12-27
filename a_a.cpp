#include<stdio.h>
main(){
	int i,a=0,b=0,n;
	scanf("%d",&n);
	if(n>=0){
		for(i=0;i<n;i++){
			if(a >= 26){
				a-=26;
				b+=26;
			}
			printf("%c",i+97-b);
			a++;
		}						
	}
	else
		printf("ERROR");

}
