#include<stdio.h>
main()
{
	char t;
	scanf("%c",&t);
	if(t>=97)
	{
		t-=32;
	}
	switch(t)
	{	
		case 65 : printf("Alpha"); 		break;
		case 66 : printf("Bravo"); 		break;
		case 67 : printf("Charlie"); 	break;
		case 68 : printf("Delta"); 		break;
		case 69 : printf("Echo");		break;
		case 70 : printf("Foxtrot");	break;
		case 71 : printf("Golf");		break;
		case 72 : printf("Hotel");		break;
		case 73 : printf("India");		break;
		case 74 : printf("Juliett");	break;
		case 75 : printf("Kilo");		break;
		case 76 : printf("Lima");		break;
		case 77 : printf("Mike");		break;
		case 78 : printf("November");	break;
		case 79 : printf("Osca");		break;
		case 80 : printf("Papa");		break;
		case 81 : printf("Quebec");		break;
		case 82 : printf("Romeo");		break;
		case 83 : printf("Sierra");		break;
		case 84 : printf("Tango");		break;
		case 85 : printf("Uniform");	break;
		case 86 : printf("Victor");		break;
		case 87 : printf("Whiskey");	break;
		case 88 : printf("X-ray");		break;
		case 89 : printf("Yankee");		break;
		case 90 : printf("Zulu");		break;
		default : printf("error");
	}
}
