#include<stdio.h>
#include<math.h>
main(){
	int a,b,c,n=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a>0 && a<500 && b>0 && b<500 && c>1 && c<10){
		while(b<500){
			a+=(2*c);
			b+=c;
			if(a>b){
				n=1;
				break;
			} 
		}
		if(n == 1)
			printf("Yes");
		else
			printf("No");
	}
}
