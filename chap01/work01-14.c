//読み込んだ段数を一辺としてもつ性包茎を*記号(NGワード)で表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int i, j;
	int value;

	puts("性包茎を表示します。");
	printf("段数は：");
	scanf("%d", &value);

	for (i = 1; i <= value; i++)
	{
		for (j = 1; j <= value; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}