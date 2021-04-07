//正の整数値を読み込んで、その値の桁数を表示するプログラムを作成せよ。
//たとえば、135を読み込んだら『その数は3桁です。』と表示し、
//1314と読み込んだら『その数は4桁です。』と表示すること。
//自作ver↓

#include <stdio.h>

int main(void)
{
	int value;
	int num = 0;

	puts("入力した値の桁数を表示します。");
	printf("値を入力：");
	scanf("%d", &value);

	while (value != 0)
	{
		value /= 10;
		num++;
	}

	printf("その桁数は%d桁です。\n", num);

	return 0;
}

/*
少し効率が良いver↓

#include <stdio.h>

int main(void)
{
	int value;
	int num = 1;

	puts("入力した値の桁数を表示します。");
	printf("値を入力：");
	scanf("%d", &value);

	while (value /= 10)
	{
		num++;
	}

	printf("その桁数は%d桁です。\n", num);

	return 0;
}*/