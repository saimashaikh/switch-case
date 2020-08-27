#include<stdio.h>
int main()
{
	printf("Pick an item: \n1.Pizza,Rs.239\n2.Burger,Rs.129\n3.Pasta,Rs.179\n4.French fries,Rs.99\n5.Sandwich,Rs50");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("You picked pizza, price=239");
			break;
		case 2:
			printf("You picked Burger,price=129");
			break;
		case 3:
			printf("You picked Pasta,price=179");
			break;
		case 4:
			printf("You picked French fries,price=99");
			break;
		case 5:
			printf("You picked Sandwich,price=50");
			break;
		default:printf("invalid order");
	}
}
