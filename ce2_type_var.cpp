#include<stdio.h>
#define Name "CEBOOSTUP8"
main(){	
/*	
	int date, num;
	float pi = 22.0/7.0;
	char nick;	
*/
	int date = 2000, num = 9;
	float pi = 22.0/7.0;
	char nick = 'o';	

	const char name[] = "churairat";
/*	
	printf("1.birth year : ");
	printf("\n2.fav num : ");
	printf("\n3.pi : %f \n4.The first letter of your nickname : \n",pi);
	scanf("%d %d %c",&date, &num ,&nick);	

	printf("\n----------------------------------");
*/	printf("\nbirth year : %d\nfav num : %d\npi : %f \nnick name : %c",date, num, pi, nick);

	printf("\n----------------------------------");
	
	char nick2[]="onn";
	printf("\nMy nickname is %s.",nick2);
	printf("\nMy full name is %s.",name);
	printf("\nlove love %s :p",Name);	
}
