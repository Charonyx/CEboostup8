#include<stdio.h>
main(){
	unsigned int d,m;
	scanf("%u %u",&d,&m);
	switch(d){
		case 17 : 
			switch(m){
				case 6 : printf("Happy Birthday !!!");	break;
				default : break;
			}
		default : break;
	}
}
/*
#include <stdio.h>
int main()
{
    int date,month;
    scanf("%d %d", &date,&month);
    (date == 17 && month == 6 && printf("Happy Birthday !!!"));
    return 0;
}
*/
