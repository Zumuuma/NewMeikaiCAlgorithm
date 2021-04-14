//配列bの全要素を配列aに逆順にコピーする関数を作成せよ。(nは要素数である)
//void ary_rcopy(int a[], const int b[], int n);

#include <stdio.h>
#include <stdlib.h>

void ary_rcopy(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b[n - i - 1]; //ケツから先頭にコピー
	}
}

int main(void)
{

	int i;
	int *x; //配列の先頭要素へのポインタ(コピー元)
	int *y; //配列の先頭要素へのポインタ(コピー先)
	int nx; //配列xの要素数

	puts("配列の要素を逆順にコピーします。");
	printf("要素数：");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); //要素数nxのint型配列xを作成
	y = calloc(nx, sizeof(int)); //要素数nxのint型配列yを作成

	printf("%d個の整数を入力してください。\n", nx);
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	ary_rcopy(y, x, nx); //配列xの要素を配列yへ逆順にコピー

	for (i = 0; i < nx; i++)
	{
		printf("(ソースデータ) x[%d] = %d\n", i, x[i]);
	}

	putchar('\n');
	printf("配列の要素を逆順にコピーしました。\n");

	for (i = 0; i < nx; i++)
	{
		printf("(コピーデータ) y[%d] = %d\n", i, y[i]);
	}

	free(x);
	free(y);

	return 0;
}