//前問(work02-02)を書きかえて、身長の平均値を求めるプログラムを作成せよ。
//平均値を求める手続きは、以下の形式の関数として実現すること。(すなわち、整数値ではなく実数値として平均値を求める。)
//double aveof(const int a[], int n);

#include <stdio.h>
#include <stdlib.h>

//---要素数nの配列aの要素の合計値を求める---
int sumof(const int a[], int n)
{
	int i;
	int sum = a[0]; //合計値

	for (i = 1; i < n; i++)
	{
		sum += a[i];
	}

	return sum;
}

//---要素数nの配列aの要素の平均値を求める---
double aveof(const int a[], int n)
{
	int i;
	int sum = sumof(a, n); //合計値
	int ave = 0;		   //平均値

	ave = sum / n; //平均値求める

	return ave;
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

	printf("平均値は%fです。\n", aveof(height, number));

	free(height); //配列heightを破棄

	return 0;
}