#include<stdio.h>
#include<stdlib.h>
long factorial(long number);
main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%d!= %d\n",i, factorial(i));
	}
	system("pause");
}
long factorial(long number)
{
	int j,mutiple=1;

	if (number <= 1)
	{
		return 1;
	}
	else
	{
		for (j = 1; j <= number; j++)
		{
			mutiple = mutiple * j;
		}
		return mutiple;
	}
}
