//たとえば、1から10までの和は（１＋１０）*５によって求められる。
//ガウスの方法と呼ばれる、この方法を用いて、1からnまでの整数の和を求めるプログラムを作成せよ。

#include <stdio.h>

int main(void)
{
	int n;
	int sum; //和

	puts("１からnまでの和を求めます。");

	printf("nの値：");
	scanf("%d", &n);

	sum = (1 + n) * n / 2;

	printf("１から%dまでの和は%dです。\n", n, sum);

	return 0;
}