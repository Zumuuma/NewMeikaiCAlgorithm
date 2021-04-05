//整数a,bを含め、そのあいだの全整数の和を求めて返す以下の関数を作成せよ。
//int sumof(int a, int b);
//aとbの大小関係に関係なく和を求めること。たとえばaが3でbが5であれば12を
//aが6でbが4であれば15を求めること。

#include <stdio.h>

int sumof(int a, int b)
{
	int sum = 0;
	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			sum += i;
		}
	}
	else
	{
		for (int i = b; i <= a; i++)
		{
			sum += i;
		}
	}

	return sum;
}

int main(void)
{
	int a, b;

	puts("整数aと整数bを含め、その間の全整数の和を求めます。");
	printf("整数a：");
	scanf("%d", &a);
	printf("整数b：");
	scanf("%d", &b);

	printf("整数aと整数bを含め、その間の全整数の和は%dです。\n", sumof(a, b));

	return 0;
}