#include<stdio.h>
main(){
	int j=0,n,a[10],b[10],c[10],x=0,y=0,z=0;
	while(n != 0){
		scanf("%d",&n);
		if(n%2 == 0 && n%3 == 0){
			a[x] = n;
			x++;
		}
		else if(n%2 == 0){
			b[y] = n;
			y++;
		}
		else if(n%3 == 0){
			c[z] = n;
			z++;
		}
	}
	
	
	printf("%%2 && %%3 :");
	for(j=0;j<x;j++){
		if(a[j] != 0)
			printf("%d,",a[j]);
	}		

	printf("\n%%2 :");
	for(j=0;j<y;j++){
		if(a[j] != 0)
			printf("%d,",b[j]);
	}		

	printf("\n%%3 :");
	for(j=0;j<z;j++){
		if(a[j] != 0)
			printf("%d,",c[j]);
	}		
}
