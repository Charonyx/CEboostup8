#include<stdio.h> 

int main() 
{ 
	
	int n,space = n - 1; 
	scanf("%d",&n);
	// run loop (parent loop) 
	// till number of rows 
	for (int i = 0; i < n; i++) 
	{ 
		// loop for initially space, 
		// before star printing 
		for (int j = 0;j < space; j++) 
			printf(" "); 

		// Print i+1 stars 
		for (int j = 0;j <= i; j++) 
			printf("* "); 

		printf("\n"); 
		space--; 
	} 

	// Repeat again in 
	// reverse order 
	space = 0; 

	// run loop (parent loop) 
	// till number of rows 
	for (int i = n; i > 0; i--) 
	{ 
		// loop for initially space, 
		// before star printing 
		for (int j = 0; j < space; j++) 
			printf(" "); 

		// Print i stars 
		for (int j = 0;j < i;j++) 
			printf("* "); 

		printf("\n"); 
		space++; 
	}
	
	return 0; 
} 
/*
#include <stdio.h>

int main()
{
    int n, c, k, space = 1;
    
    printf("Enter number of rows\n");
    scanf("%d", &n);
    
    space = n - 1;
    
    for (k = 0; k < n; k++)
    {
    
        for (c = 0; c < space; c++)
        printf(" ");
        
        space--;
        
        for (c = 1; c <= 2*k-1; c++)
        printf("*");
        
        printf("\n");    
    
    }    
    space = 1;
    
    for (k = 1; k <= n - 1; k++)
    {
    
        for (c = 1; c <= space; c++)
        printf(" ");
        
        space++;
        
        for (c = 1 ; c <= 2*(n-k)-1; c++)
        printf("*");
        
        printf("\n");    
        
    }
    
    return 0; 
}
*/
