#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = 0;
	while (n !=1&&n>0 )
	{
		if (n % 2 == 0)
		{
			n /= 2;
			m++;
		}
		else if (n % 2 == 1)
		{
			n = (3*n + 1) / 2;
			m++;
		}
	}
	printf("%d", m);
	return 0;
}