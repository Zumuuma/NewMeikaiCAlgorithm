//下を向いたn段の数字ピラミッドを表示する関数を作成せよ。void nrpira(int n);
//第i行目に表示する数字はi%10にによって求めること。

#include <stdio.h>

void nrpira(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			putchar(' ');
		}

		for (int j = 0; j < (n - i) * 2 + 1; j++)
		{
			printf("%d", i % 10);
		}
		putchar('\n');
	}
}

int main(void)
{
	int value;

	puts("下を向いたn段の数字ピラミッドを表示します。");
	printf("段数：");
	scanf("%d", &value);

	nrpira(value);

	return 0;
}