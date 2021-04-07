//読み込んだ高さと横幅をもつ長包茎を*記号で表示するプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width;

	puts("長包茎を表示します。");
	printf("高さは：");
	scanf("%d", &height);
	printf("横幅は：");
	scanf("%d", &width);

	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= width; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}