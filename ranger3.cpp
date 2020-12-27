#include<stdio.h>
#include<math.h>
main(){
	int n;
	scanf("%d",&n);
	for(int i=pow(n,2);i>=1;i--){
		printf("%d\n",i);
	}
}
