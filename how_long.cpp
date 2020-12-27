#include<stdio.h>
#include<math.h>
main(){
	unsigned int n,i=0,a[1000]={0},max=0;
	scanf("%u",&n);
	if(n>0){
		for(i=1;i<=n;i++){
			scanf("%u",&a[i]);
			if(abs(a[i]-a[i-1]) > max)
				max = abs(a[i]-a[i-1]);
		}	
	}
	printf("Longest = %u",max);
}
