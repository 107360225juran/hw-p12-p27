#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int len;
	char string1[60] = "welcome";
	char string2[60];
	strcpy_s(string2, sizeof(string1) ,string1);
	printf("string2=%s", string2 );
	printf("\n");
	len = strlen(string2);
	printf("¦r¥Àªø«×¬°:%d", len);
	system("pause");
}