#include<stdio.h>
#include<string.h>
main(){
	int i;
	char text[1000];
	scanf("%[^\n]",text);
	for(i=0;i<=strlen(text)-1;i++){
		printf("%c",text[i]);
		if((i+1)%10 == 0){
			printf("\n");
		}
	}
}
/*
#include <stdio.h>
        int i=0;
    char str[100];
int main()
{


    scanf("%[^\n]s",str);

           while (str[i++]!='\0')
       {

            printf("%c",str[i-1]);

           if (i%10==0)
           {
               printf("\n");
           }

       }
}
*/
