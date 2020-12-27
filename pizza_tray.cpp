#include<stdio.h>
#include<math.h>
main(){
	int p;
	scanf("%d",&p);
	if(p>=0){
		if(p%8 >= 1)
			printf("%d",(p/8)+1);
		else
			printf("%d",p/8);	
	}
}
