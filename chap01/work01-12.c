//上と左に掛かる数が付いた九九の表を表示するプログラムを作成せよ。
//表示には、縦線記号文字'|'、マイナス記号文字'-'、プラス記号文字'+'を用いること。

#include <stdio.h>

int main(void)
{
	int i, j;

	printf("　 |");

	for (i = 1; i <= 9; i++)
	{
		printf("　%d", i);
	}

	putchar('\n');
	printf("---+---------------------------\n");

	for (i = 1; i <= 9; i++)
	{
		printf(" %d |", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%3d", i * j);
		}
		putchar('\n');
	}

	return 0;
}