//二つの変数a,bに整数値を読み込んでb-aの値を表示するプログラムを作成せよ。
//なお、変数bに読み込んだ値がa以下であれば、変数bの値を再入力させること。

#include <stdio.h>

int main(void)
{
	int a, b;
	int sum;

	puts("整数a,bのb-aの値を表示します。");
	printf("aの値：");
	scanf("%d", &a);
	printf("bの値：");
	scanf("%d", &b);

	do
	{
		puts("aより大きな値を入力せよ！");
		printf("bの値：");
		scanf("%d", &b);
	} while (b <= a);

	printf("b-aは%dです。\n", b - a);

	return 0;
}