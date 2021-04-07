//n段のピラミッドを表示する関数を作成せよ。void spira(int n);
//第i行目には(i-1)*2+1個の記号文字'*'を表示すること。
//(そのため、最終行の第n行目には(n-1)*2+1個の記号文字'*'を表示することになる。)

#include <stdio.h>

void spira(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i == n) //最終行に入る条件分岐
		{
			for (int j = 1; j <= (n - 1) * 2 + 1; j++)
			{
				putchar('*');
			}
		}
		else
		{
			for (int j = 1; j <= n - i; j++)
			{
				putchar(' '); //穴埋めは空白で作る
			}

			for (int j = 1; j <= (i - 1) * 2 + 1; j++)
			{
				putchar('*');
			}
		}
		putchar('\n');
	}
}

int main(void)
{
	int value;

	puts("n段のピラミッドを表示します。");
	printf("段数：");
	scanf("%d", &value);

	spira(value);

	return 0;
}