#include<stdio.h>
#include<stdlib.h>
int maxium(int x, int y, int z);
main()
{
	int number1=0;
	int number2=0;
	int number3=0;
	
	printf("Enter three integer:");
	scanf_s("%d%d%d",&number1, &number2, &number3);
	printf("maxium=");
	printf("%d", maxium(number1, number2, number3));
	system("pause");
}
int maxium(int x, int y, int z)
{
	int max;
	max = x;
	if (y > max)
	{
		max = y;
	}
		if (z > max)
		{
		max = z;
		}
		return max;
}