//sum_while.cのwhile文終了時点における変数iの値がn+1になることを確認せよ。
//(変数iの値を表示するように書きかえたプログラムを作成すること)。

#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; //和

	puts("１からnまでの和を求めます。");

	printf("nの値：");
	scanf("%d", &n);

	sum = 0;
	i = 1;
	putchar('\n');
	while (i <= n) //iがn以下であれば繰り返す
	{
		printf("iの値：%d\n", i);
		sum += i; //sumにiを加える
		i++;	  //iの値をインクリメント
	}

	printf("iの値：%d\n", i);
	printf("１から%dまでの和は%dです。\n", n, sum);

	return 0;
}