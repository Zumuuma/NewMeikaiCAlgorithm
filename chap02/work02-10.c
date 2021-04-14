//配列aの全要素の並びをシャッフルする(無作為な順に並べる)関数を作成せよ。(nは要素数である)
//void shuffle(int a[], int n);

#include <time.h>
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

void shuffle(int a[], int n)
{
	int i, j;

	srand(time(NULL));
	for (i = n - 1; i > 0; i--) //i>0なのかi>=0なのか不明(おそらく、i>0で良いはず)
	{
		j = rand() % (i + 1);
		if (i != j)
		{
			swap(int, a[i], a[j]);
		}
	}
}

int main(void)
{

	int i;
	int *x; //配列の先頭要素へのポインタ
	int nx; //配列xの要素数

	puts("配列の要素をシャッフルします。");
	printf("要素数：");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); //要素数nxのint型配列xを作成

	printf("%d個の整数を入力してください。\n", nx);
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	shuffle(x, nx); //配列xの要素をシャッフル

	printf("配列の要素をシャッフルしました。\n");

	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}

	free(x);

	return 0;
}