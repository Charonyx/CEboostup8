//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i, j;
void swap(int* a, int* b);

int main() {
	int n, num[100];
	printf("Enter the number of element(s) : ");
	scanf("%d", &n);
	if (n > 1 && n < 100) 
	{
		for (i = 0; i < n; i++) 
		{
			printf("\nEnter a number : ");
			scanf("%d", &num[i]);
		}
		for (i = 0; i < n; i++) 
		{
			for (j = i + 1; j < n; j++) 
			{
				if (num[i] < num[j]) 
				{
					swap(&num[i], &num[j]);
/*
					a = num[j];
					num[j] = num[i];
					num[i] = a;
*/
				}
			}
		}
		printf("The first maximum number : %d\n", num[0]);
		printf("The seccond maximum number : %d\n", num[1]);
		printf("The Range number : %d", num[0]-num[i-1]);

	}
	return 0;
}
void swap(int* a,int* b) {
	int temp;
/*
	*a = &num[i];
	*b = &num[j];
*/
	temp = *b;
	*b = *a;
	*a = temp;
}

//#include<stdio.h>
//#include<math.h>
//int x,b=1;
//int isPrime(int);
//
//main(){
//	scanf("%d",&x);
//	b = isPrime(x);
////	printf("%d",b);
//	if(b==1){
//		printf("%d is prime",x);
//	}
//	else{
//		printf("%d is not prime",x);
//	}	
//}
//
//int isPrime(int x){
//	if(x > 1){
//		for(int i=2;i<=sqrt(x);i++){
//			if(x%i == 0 ){
//				b=0;
//				break;
//			}
//			else{
//				b=1;
//			}
//		}	
//	}
//	else{
//		b=0;
//	}
//	return b;
//}
