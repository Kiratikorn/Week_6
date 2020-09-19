#include<stdio.h>
int main()
{
	int  n;
	scanf_s("%d", &n);
	if (n >= 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n + n; j++)
			{
				if (i == n - 1 && j > n - 1)
				{
					return 0;
				}
				else if ((i == 0 && j == n - 1) || i == n - 1 || j == n - i - 1 || (i > 0 && j == n + i - 2))
				{
					printf("* ");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("Error");
	}
	return 0;
}