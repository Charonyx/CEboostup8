#include<stdio.h>
main(){
	int n,b,c,B,x; //bottle & bottle_cap & new_bottle
//	printf("%d",6/10);
	scanf("%d",&n);
	if(n >= 20 && n <= 50000){	
		n /= 20;
	//	b = int(n);
		b=n;
		c = b;
		B = b;
//	printf("%d",b);
		while(c>=4 || b>=2){
		//	x=int(b/2);
			x=b/2;
			B+=x;
		//	printf("all:%d b:%d\n",B,b);
			b+=x-(2*x);
		//	printf("all:%d b:%d\n",B,b);
			c+=x;
		//	printf("all:%d c:%d\n\n",B,c);
			
			x=int(c/4);
		//	printf("all:%d c:%d\n",B,c);
			B+=x;
		//	printf("all:%d c:%d\n",B,c);
			c+=x-(4*x);
		//	printf("all:%d c:%d\n",B,c);
			b+=x;
		}
		printf("%d",B);
}
	
	
}
