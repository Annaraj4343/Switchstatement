#include <stdio.h>
main()
{
	printf("pick an item: \n1.Pizza\n2.Burger\n3.Pasta\n4.French Fries\n5.Sandwich");
	int choice=1;
	scanf("%d, &choice");
	
	switch(choice)
	{
		case 1 :
			printf("you picked pizza");
			break;
		case 2 :
			printf("you picked burger");
			break;
		case 3 :
			printf("you picked Pasta");
			break;
		case 4 :
			printf("you picked French Fries");
			break;
		case 5 :
			printf("you picked Sandwitch");
			break;
		default : printf("Invalid Choice");	
	}
}
