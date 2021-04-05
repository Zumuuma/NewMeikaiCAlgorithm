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
	else if (n == 3)
	{
		printf("それは３です。\n");
	}
	else
		; //空文（実質的に何もしない文）

	return 0;
}