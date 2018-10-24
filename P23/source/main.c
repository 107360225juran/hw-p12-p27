#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rolldice(void);
enum Status { Continue, won, lost };
int rolldice(void)
{
	int worksum,die1,die2;
	die1 = 1 + rand() % 6;
	die2 = 1 + rand() % 6;
	worksum = die1 + die2;
	printf("Player rolled =%d +%d =%d\n ", die1, die2, worksum);
	return worksum;
}
main()
{
	int sum, mypoint;
	srand(time(NULL));
	sum = rolldice();
	enum Status gamestatus;
	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = won;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = lost;
		break;
	default:
		gamestatus = Continue;
		mypoint = sum;
		printf("Point is %d\n", mypoint);
		break;
	}
	while (gamestatus == Continue)
	{
		sum = rolldice();
		if (sum == 7)
		{
			gamestatus = lost;
		}
		else if (sum == mypoint)
		{
			gamestatus = won;
		}
	}
	if (gamestatus == won)
	{
		printf("Player win\n");
	}
	if (gamestatus == lost)
	{
		printf("Player lose\n");
	}
	system("pause");
}


