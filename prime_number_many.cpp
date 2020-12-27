#include<stdio.h>
#include<math.h>
main(){
	signed int a,b,count=0,i,j;
	scanf("%u %u",&a,&b);
	for(i=a;i<=b;i++){
		for(j=2;j<=sqrt(i);j++){
			if(i % j != 0){
				count++;
				continue;
				printf("if %u - %u :%u %% %u\n",a,b,i,j);
				
				
			}else{
				printf("else %u - %u :%u %% %u\n",a,b,i,j);
				
			}
		}		
	}
	printf("%u",count);
}
