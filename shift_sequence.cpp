#include<stdio.h>
main(){
	unsigned int n,i,a[i],x,j;
	scanf("%u",&n);
	if(n>0){
		for(i=1;i<=n;i++){
			a[i-1]=i;
			printf("%d",a[i-1]);
		}	
		printf("\n");
		for(j=0;j<n-1;j++){
    		x=a[n-1];
		    for(i=n-1;i>0;i--)
		    {
		        a[i]=a[i-1];
		    }
		    a[0]=x;
		    
			for(i=0;i<n;i++){
				printf("%d",a[i]);
			}
			printf("\n");
		}
	}

}
