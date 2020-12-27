#include<stdio.h>
#define year 2563
int main(){
	int i,n,y[n+1];
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%d",&y[i]);
		y[i] = 2563-y[i];		
	}
	for(i=0;i<=n;i++){
		if(y[i]>=0)
			printf("%d\n",y[i]);
		else
			printf("NULL\n");			
	}
	return 0;
}
