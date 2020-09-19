#include<stdio.h>
int main()
{
	char a;
	printf("Enter Alphabet:");
	scanf_s("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("It's Small Letter");
	}
	else if (a >= 'A' && a <= 'Z')
	{
		printf("It's Capital Letter");
	}
	else
	{
		printf("It's not Alphabet D: ");
	}
	return 0;
}