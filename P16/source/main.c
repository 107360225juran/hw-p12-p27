#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%.2lf ", sqrt(i));
	}
	printf("\n");
	system("pause");
}