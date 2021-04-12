//配列要素の並びの反転の経過を逐一表示するようにrev_ary.cを書きかえたプログラムを作成せよ。
//(関数ary_reverseに手を加えること。)

#include <stdio.h>
#include <stdlib.h>

//---type型のxとyの値を交換---
#define swap(type, x, y) \
	do                   \
	{                    \
		type t = x;      \
		x = y;           \
		y = t;           \
	} while (0)

//---要素数nの配列aの要素の並びを反転---
void ary_reverse(int a[], int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		printf("%d ", a[j]);
	}
	putchar('\n');

	for (i = 0; i < n / 2; i++)
	{
		printf("a[%d]とa[%d]を交換します。\n", i, n - i - 1);
		swap(int, a[i], a[n - i - 1]);
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[j]);
		}
		putchar('\n');
	}
	puts("反転が終了しました。");
}

int main(void)
{
	int i;
	int *x; //配列の先頭要素へのポインタ
	int nx; //配列xの要素数

	printf("要素数：");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); //要素数nxのint型配列xを作成

	printf("%d個の整数を入力してください。\n", nx);
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	putchar('\n');
	ary_reverse(x, nx); //配列xの要素の並びを反転
	putchar('\n');

	printf("配列の要素の並びを反転しました。\n");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}

	free(x);

	return 0;
}