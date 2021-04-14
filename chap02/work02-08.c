//配列bの全要素を配列aにコピーする関数を作成せよ。(nは要素数である)
//void ary_copy(int a[], const int b[], int n);

#include <stdio.h>
#include <stdlib.h>

void ary_copy(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b[i]; //コピー
	}
}

int main(void)
{

	int i;
	int *x; //配列の先頭要素へのポインタ(コピー元)
	int *y; //配列の先頭要素へのポインタ(コピー先)
	int nx; //配列xの要素数

	puts("配列の要素をコピーします。");
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

	ary_copy(y, x, nx); //配列xの要素を配列yへコピー

	for (i = 0; i < nx; i++)
	{
		printf("(ソースデータ) x[%d] = %d\n", i, x[i]);
	}

	putchar('\n');
	printf("配列の要素をコピーしました。\n");

	for (i = 0; i < nx; i++)
	{
		printf("(コピーデータ) y[%d] = %d\n", i, y[i]);
	}

	free(x);
	free(y);

	return 0;
}