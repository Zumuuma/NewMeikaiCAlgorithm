//直角二等辺三角形を表示する部分を独立させて、以下の形式の関数として実現せよ。
//さらに、直角が左上側、右上側、右下側の二等辺三角形を表示する関数を作成せよ。

#include <stdio.h>

void triangleLB(int n) //左下側が直角の二等辺三角形を表示
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleLU(int n) //左上側が直角の二等辺三角形を表示
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= i; j--)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleRU(int n) //右上側が直角の二等辺三角形を表示
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i - 1; j++)
		{
			putchar(' '); //穴埋めは空白で作る
		}
		for (int j = 5; j >= i; j--)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleRB(int n) //右下側が直角の二等辺三角形を表示
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			putchar(' '); //穴埋めは空白で作る
		}
		for (int j = 1; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

int main(void)
{
	int n;

	do
	{
		printf("何段の三角形ですか：");
		scanf("%d", &n);
	} while (n <= 0);

	triangleLB(n); //左下側が直角の二等辺三角形を表示
	putchar('\n');
	triangleLU(n); //左上側が直角の二等辺三角形を表示
	putchar('\n');
	triangleRU(n); //右上側が直角の二等辺三角形を表示
	putchar('\n');
	triangleRB(n); //右下側が直角の二等辺三角形を表示

	return 0;
}