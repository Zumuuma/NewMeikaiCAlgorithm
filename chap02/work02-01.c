//ary_max.cのプログラムを最小値を求めるように書きかえたプログラムを作成せよ。
//最小値を求める手続きは、以下の形式の関数として実現すること。
//int minof(const int a[], int n);

#include <stdio.h>
#include <stdlib.h>

//---要素数nの配列aの要素の最大値を求める---
int minof(const int a[], int n)
{
	int i;
	int min = a[0]; //最小値

	for (i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	return min;
}

int main(void)
{
	int i;
	int *height; //配列の先頭要素へのポインタ
	int number;	 //人数＝配列heightの要素数

	printf("人数：");
	scanf("%d", &number);

	height = calloc(number, sizeof(int)); //要素数numberの配列を生成

	printf("%d人の身長を入力してください。\n", number);
	for (i = 0; i < number; i++)
	{
		printf("height[%d]：", i);
		scanf("%d", &height[i]);
	}

	printf("最小値は%dです。\n", minof(height, number));

	free(height); //配列heightを破棄

	return 0;
}