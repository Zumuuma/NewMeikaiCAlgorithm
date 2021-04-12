//card_conv.cの関数card_convrを書きかえて、配列の先頭側に下位桁ではなく上位桁を格納する関数card_convを作成せよ。
//int card_conv(unsigned x, int n, char d[]);

#include <stdio.h>

#define swap(type, x, y) \
	do                   \
	{                    \
		type t = x;      \
		x = y;           \
		y = t;           \
	} while (0)

//---整数値xをn進数に変換して配列dに上位桁を格納---
int card_conv(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cnt;		//文字数
	int digits = 0; //変換後の桁数

	if (x == 0) //0であれば
	{
		d[digits++] = dchar[0]; //変換後も0
	}
	else
	{
		while (x)
		{
			d[digits++] = dchar[x % n]; //nで割った剰余を格納
			x /= n;
		}
	}

	for (int i = 0; i < digits / 2; i++) //関数card_conv内で配列内を反転させる
	{
		swap(char, d[i], d[digits - i - 1]);
	}

	return digits;
}

int main(void)
{
	int i;
	unsigned no;   //変換する整数
	int cd;		   //基数
	int dno;	   //変換後の桁数
	char cno[512]; //変換後の数値の各桁の数字を格納する文字の配列
	int retry;	   //もう一度？

	puts("10進数を基数変換します。");

	do
	{
		printf("変換する非負の整数：");
		scanf("%u", &no);

		do
		{
			printf("何進数に変換しますか（2-36）：");
			scanf("%d", &cd);
		} while (cd < 2 || cd > 36);

		dno = card_conv(no, cd, cno); //noをcd進数に変換

		printf("%d進数では", cd);
		for (i = 0; i < dno; i++) //上位桁から順に表示
		{
			printf("%c", cno[i]);
		}
		printf("です。\n");

		printf("もう一度しますか（1...はい/0...いいえ）：");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}