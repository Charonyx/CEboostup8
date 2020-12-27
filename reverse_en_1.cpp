#include<stdio.h>
main(){
	int n,i=0,j=0,a[i];
	scanf("%d",&n);
	
	for(i=0;n>0;i++){    
		a[i]=n%10;    
		n=n/10;    
	}  
	
	for(i=i-1;i>=0;i--)	{    
		printf("%d",a[i]+48);    
	} 	
//	for(j=0;j<i;j++){    
//		printf("%d ",a[j]);
//		a[j]+=48;
//		printf("%d",a[j]);
//	}
/*	
	while(num!=0){
		n[i] = num/10;
		if(num-n[i]*10 > 9){
			n[i+1] = num-n[i]*10;
			i+=2;
			
		}break;		
	}
	printf("%d",i);
	while(j<i){
		printf("%d ",a[j]);
		a[j]+=48;
		printf("%d",a[j]);
		j--;
	}
*/	
}
