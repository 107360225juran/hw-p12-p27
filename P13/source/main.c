#include<stdio.h>
#include<stdlib.h>
double power(double x, int n)
{
	int j; 
	double powerans=1;
	for (j = 1; j <= n; j++)
	{
		powerans = powerans * x;
	}
	return powerans;
}
main()
{
	int i;
	double ans;
	printf("�Эp��3.5��i���� �п�Ji=");
	scanf_s("%d",&i);
	ans = power(3.5, i);
	printf("3.5��%d����=%lf", i, ans);
	system("pause");
}