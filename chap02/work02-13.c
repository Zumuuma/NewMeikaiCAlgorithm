//日付を表す構造体が下のように与えられているとする。
/*typedef struct
{
	int y; //西暦年
	int m; //月(1～12)
	int d; //日(1～31)
} Date;*/

//以下に示す関数を作成せよ。
//・y年m月d日を表す構造体を返却する関数DateOf
//Date DateOf(int y, int m, int d);

//・日付xのn日後の日付を返す関数After
//Date After(Date x, int n);

//・日付xのn日前の日付を返す関数Before
//Date Before(Date x, int n);

#include <stdio.h>

typedef struct
{
	int y; //西暦年
	int m; //月(1～12)
	int d; //日(1～31)
} Date;

/*--- 各月の日数 ---*/
static int mdays[2][13] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /* 平年 */
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /* 閏年 */
};

/*--- 西暦year年は閏年か ---*/
int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

Date DateOf(int y, int m, int d)
{
	Date temp;

	temp.y = y;
	temp.m = m;
	temp.d = d;

	return temp;
}

Date After(Date x, int n)
{
	x.d += n; //現在の日(day)から進む分だけとりあえず足す。(後でオーバーした値を調整する)

	while (x.d > mdays[isleap(x.y)][x.m - 1]) //日(day)が月の日数(28日or29日or30日or31日)をオーバーしている間、調整する。
	{
		x.d -= mdays[isleap(x.y)][x.m - 1]; //日(day)を引いて調整。
		if (++x.m > 12)						//ここで月(month)を増やして調整している！！
		{
			x.y++;	 //12月を超えてたら年(year)を1つ(年)増やす。
			x.m = 1; //月(month)を1月に戻す。
		}
	}

	return x;
}

Date Before(Date x, int n)
{
	x.d -= n; //現在の日(day)から戻る分だけとりあえず引く。(後で負の値を調整する)

	while (x.d < 1) //日(day)が負の値になっている間、調整をする。
	{
		if (--x.m < 1) //ここで月(month)を減らして調整している！！
		{
			x.y--;	  //1月より前だったら年(year)を1つ(年)減らす。
			x.m = 12; //月(month)を12月に進める。
		}
		x.d += mdays[isleap(x.y)][x.m - 1]; //日(day)を足して調整。
	}

	return x;
}

int main(void)
{
	int select_AorB;  //何日前か後か
	int select_d;	  //任意の日数
	int y, m, d;	  //年月日
	Date input_date;  //入力された現在の日付
	Date return_date; //関数で処理した返却先
	char *ws[] = {"日", "月", "火", "水", "木", "金", "土"};

	printf("現在の日付を入力してください（年月日の間は半角スペース）：");
	scanf("%d %d %d", &y, &m, &d);

	input_date = DateOf(y, m, d);

	putchar('\n');

	printf("今日は%d年%d月%d日(%s)です。\n", input_date.y, input_date.m, input_date.d, ws[(input_date.y + input_date.y / 4 - input_date.y / 100 + input_date.y / 400 + (13 * input_date.m + 8) / 5 + input_date.d) % 7]);

	putchar('\n');

	do
	{
		printf("今日より前の日付を表示しますか？それとも後の日付を表示しますか？　前．．．１/後．．．２：");
		scanf("%d", &select_AorB);
	} while (select_AorB < 1 || select_AorB > 2);

	if (select_AorB == 1)
	{
		printf("何日前に戻りますか？：");
		scanf("%d", &select_d);

		return_date = Before(input_date, select_d);

		putchar('\n');

		printf("%d日前は%d年%d月%d日(%s)です。\n", select_d, return_date.y, return_date.m, return_date.d, ws[(return_date.y + return_date.y / 4 - return_date.y / 100 + return_date.y / 400 + (13 * return_date.m + 8) / 5 + return_date.d) % 7]);
	}
	else if (select_AorB == 2)
	{
		printf("何日後まで進めますか？：");
		scanf("%d", &select_d);

		return_date = After(input_date, select_d);

		putchar('\n');

		printf("%d日後は%d年%d月%d日(%s)です。\n", select_d, return_date.y, return_date.m, return_date.d, ws[(return_date.y + return_date.y / 4 - return_date.y / 100 + return_date.y / 400 + (13 * return_date.m + 8) / 5 + return_date.d) % 7]);
	}

	return 0;
}