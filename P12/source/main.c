#include<stdio.h>
#include<stdlib.h>
int square(int x)
{
	return x * x;
}
main()
	{
	int y;
	for(y=1;y<=10;y++)
	{
		printf("%d ", square(y));
	}
	//printf("\n");
	system("pause");
	}
