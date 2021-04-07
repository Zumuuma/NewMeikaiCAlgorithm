//１，２，・・・，nの和を求める（do文によって正の整数値のみをnに読み込む）

#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; //和

	puts("１からｎまでの和を求めます。");
	do
	{
		printf("ｎの値：");
		scanf("%d", &n);
	} while (n <= 0);

	sum = 0;

	for (i = 1; i <= n; i++) //i=1,2,...,n
	{
		sum += i; //sumにiを加える
	}

	printf("１から%dまでの和は%dです。\n", n, sum);

	return 0;
}