#include <stdio.h>

int main(void)
{
	int n;

	printf("整数を入力してください：");
	scanf("%d", &n);

	if (n == 1)
	{
		printf("それは１です。\n");
	}
	else if (n == 2)
	{
		printf("それは２です。\n");
	}
	else
	{
		printf("それは３です。\n");
	}

	return 0;
}