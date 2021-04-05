//三値の最小値を求める関数min3を作成せよ。

#include <stdio.h>

int min3(int a, int b, int c)
{
	int min = a; //とりあえず最小値としておく

	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}

	return min;
}

int main(void)
{
	int a, b, c;
	int min;

	printf("３つの整数の最小値を求めます。\n");
	printf("aの値：");
	scanf("%d", &a);
	printf("bの値：");
	scanf("%d", &b);
	printf("cの値：");
	scanf("%d", &c);

	printf("最小値は%dです。\n", min3(a, b, c));

	return 0;
}