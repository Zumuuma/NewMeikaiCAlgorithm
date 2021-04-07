//三値の大小関係１３種類すべての組合わせに対して中央値を求めて表示するプログラムを作成せよ。

#include <stdio.h>

//---a,b,cの中央値を求める---
int med3(int a, int b, int c)
{
	if (a >= b)
	{
		if (b >= c)
		{
			return b;
		}
		else if (a <= c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else if (a > c)
	{
		return a;
	}
	else if (b > c)
	{
		return c;
	}
	else
	{
		return b;
	}
}

int main(void)
{
	printf("max3(%d,%d,%d) = %d\n", 3, 2, 1, med3(3, 2, 1)); //[A] a>b>c
	printf("max3(%d,%d,%d) = %d\n", 3, 2, 2, med3(3, 2, 2)); //[B] a>b=c
	printf("max3(%d,%d,%d) = %d\n", 3, 1, 2, med3(3, 1, 2)); //[C] a>c>b
	printf("max3(%d,%d,%d) = %d\n", 3, 2, 3, med3(3, 2, 3)); //[D] a=c>b
	printf("max3(%d,%d,%d) = %d\n", 2, 1, 3, med3(2, 1, 3)); //[E] c>a>b
	printf("max3(%d,%d,%d) = %d\n", 3, 3, 2, med3(3, 3, 2)); //[F] a=b>c
	printf("max3(%d,%d,%d) = %d\n", 3, 3, 3, med3(3, 3, 3)); //[G] a=b=c
	printf("max3(%d,%d,%d) = %d\n", 2, 2, 3, med3(2, 2, 3)); //[H] c>a=b
	printf("max3(%d,%d,%d) = %d\n", 2, 3, 1, med3(2, 3, 1)); //[I] b>a>c
	printf("max3(%d,%d,%d) = %d\n", 2, 3, 2, med3(2, 3, 2)); //[J] b>a=c
	printf("max3(%d,%d,%d) = %d\n", 1, 3, 2, med3(1, 3, 2)); //[K] b>c>a
	printf("max3(%d,%d,%d) = %d\n", 2, 3, 3, med3(2, 3, 3)); //[L] b=c>a
	printf("max3(%d,%d,%d) = %d\n", 1, 2, 3, med3(1, 2, 3)); //[M] c>b>a

	return 0;
}