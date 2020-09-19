#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < 2 * n + 1; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			if (j == 0 || j == n + 1 || i == n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}