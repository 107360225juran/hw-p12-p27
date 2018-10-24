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
	printf("請計算3.5的i次方 請輸入i=");
	scanf_s("%d",&i);
	ans = power(3.5, i);
	printf("3.5的%d次方=%lf", i, ans);
	system("pause");
}