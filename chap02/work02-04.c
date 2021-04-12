//ary_max_rand.cのプログラムを身長だけでなく人数も乱数で生成するように書きかえたプログラムを作成せよ。
//人数は、5以上20以下の乱数とすること。

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

//---要素数nの配列aの要素の最大値を求める---
int maxof(const int a[], int n)
{
	int i;
	int max = a[0]; //最大値

	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	return max;
}

int main(void)
{
	int i;
	int *height; //配列の先頭要素へのポインタ
	int number;	 //人数＝配列heightの要素数

	srand(time(NULL));		  //時刻から乱数の種を初期化
	number = 5 + rand() % 16; //5~20の乱数を生成・代入

	height = calloc(number, sizeof(int)); //要素数numberの配列を生成

	for (i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90; //100~189の乱数を生成・代入
		printf("height[%d] = %d\n", i, height[i]);
	}

	printf("最大値は%dです。\n", maxof(height, number));

	free(height); //配列heightを破棄

	return 0;
}