#include<stdio.h>
main(){
	unsigned int h,m,s,m2,s2;
	char t[3];
	scanf("%u %u %u %s %u %u",&h,&m,&s,t,&m2,&s2);
	if(h>=0 && m>=0 && s>=0 && m2>=0 && s2>=0){
		s+=h*3600+m*60;
		//printf("%d\n",s);
		s2+=m2*60;
		//printf("%d\n",s2);
		s+=s2;

		h=s/3600;
		m2=(s-h*3600)/60;
		h%=24;		
		if(h%24 > 12){
			h-=12;
			t[0]='p';
			if(h%24==12){
				t[0]='a';	
			}
		}
		s%=60;
//		h%=12;
		
		if((m2>m && m2==12) || (m2<m && m==12)){
			if(t[0]=='a'){
				t[0]='p';
			}
			else if(t[0]=='p'){
				t[0]='a';
			}			
		}
		
		if(h<10)	
			printf("0");
		printf("%u:",h);
		if(m2<10)	
			printf("0");
		printf("%u:",m2);
		if(s<10)	
			printf("0");
		printf("%u %s",s,t);
	}
}
/*
#include<stdio.h>
main(){
	int h,m,s,m2,s2;
	char t[3];
	scanf("%d %d %d %s %d %d",&h,&m,&s,t,&m2,&s2);
	if(h>=0 && m>=0 && s>=0 && m2>=0 && s2>=0){
		s+=h*3600+m*60;
		printf("%d\n",s);
		s2+=m2*60;
		printf("%d\n",s2);
		s+=s2;

		h=s/3600;
		m2=(s-h*3600)/60;		
		if(h>12){
			h-=12;
			t[0]='p';
			if(h==12){
				t[0]='a';	
			}
		}
		s%=60;
		
		if((m2>m && m2==12) || (m2<m && m==12)){
			if(t[0]=='a'){
				t[0]='p';
			}
			else if(t[0]=='p'){
				t[0]='a';
			}			
		}
		
		if(h<10)	
			printf("0");
		printf("%d:",h);
		if(m2<10)	
			printf("0");
		printf("%d:",m2);
		if(s<10)	
			printf("0");
		printf("%d %s",s,t);
	}
}
*/

