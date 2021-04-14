//���t��\���\���̂����̂悤�ɗ^�����Ă���Ƃ���B
/*typedef struct
{
	int y; //����N
	int m; //��(1�`12)
	int d; //��(1�`31)
} Date;*/

//�ȉ��Ɏ����֐����쐬����B
//�Ey�Nm��d����\���\���̂�ԋp����֐�DateOf
//Date DateOf(int y, int m, int d);

//�E���tx��n����̓��t��Ԃ��֐�After
//Date After(Date x, int n);

//�E���tx��n���O�̓��t��Ԃ��֐�Before
//Date Before(Date x, int n);

#include <stdio.h>

typedef struct
{
	int y; //����N
	int m; //��(1�`12)
	int d; //��(1�`31)
} Date;

/*--- �e���̓��� ---*/
static int mdays[2][13] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /* ���N */
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /* �[�N */
};

/*--- ����year�N�͉[�N�� ---*/
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
	x.d += n; //���݂̓�(day)����i�ޕ������Ƃ肠���������B(��ŃI�[�o�[�����l�𒲐�����)

	while (x.d > mdays[isleap(x.y)][x.m - 1]) //��(day)�����̓���(28��or29��or30��or31��)���I�[�o�[���Ă���ԁA��������B
	{
		x.d -= mdays[isleap(x.y)][x.m - 1]; //��(day)�������Ē����B
		if (++x.m > 12)						//�����Ō�(month)�𑝂₵�Ē������Ă���I�I
		{
			x.y++;	 //12���𒴂��Ă���N(year)��1��(�N)���₷�B
			x.m = 1; //��(month)��1���ɖ߂��B
		}
	}

	return x;
}

Date Before(Date x, int n)
{
	x.d -= n; //���݂̓�(day)����߂镪�����Ƃ肠���������B(��ŕ��̒l�𒲐�����)

	while (x.d < 1) //��(day)�����̒l�ɂȂ��Ă���ԁA����������B
	{
		if (--x.m < 1) //�����Ō�(month)�����炵�Ē������Ă���I�I
		{
			x.y--;	  //1�����O��������N(year)��1��(�N)���炷�B
			x.m = 12; //��(month)��12���ɐi�߂�B
		}
		x.d += mdays[isleap(x.y)][x.m - 1]; //��(day)�𑫂��Ē����B
	}

	return x;
}

int main(void)
{
	int select_AorB;  //�����O���ォ
	int select_d;	  //�C�ӂ̓���
	int y, m, d;	  //�N����
	Date input_date;  //���͂��ꂽ���݂̓��t
	Date return_date; //�֐��ŏ��������ԋp��
	char *ws[] = {"��", "��", "��", "��", "��", "��", "�y"};

	printf("���݂̓��t����͂��Ă��������i�N�����̊Ԃ͔��p�X�y�[�X�j�F");
	scanf("%d %d %d", &y, &m, &d);

	input_date = DateOf(y, m, d);

	putchar('\n');

	printf("������%d�N%d��%d��(%s)�ł��B\n", input_date.y, input_date.m, input_date.d, ws[(input_date.y + input_date.y / 4 - input_date.y / 100 + input_date.y / 400 + (13 * input_date.m + 8) / 5 + input_date.d) % 7]);

	putchar('\n');

	do
	{
		printf("�������O�̓��t��\�����܂����H����Ƃ���̓��t��\�����܂����H�@�O�D�D�D�P/��D�D�D�Q�F");
		scanf("%d", &select_AorB);
	} while (select_AorB < 1 || select_AorB > 2);

	if (select_AorB == 1)
	{
		printf("�����O�ɖ߂�܂����H�F");
		scanf("%d", &select_d);

		return_date = Before(input_date, select_d);

		putchar('\n');

		printf("%d���O��%d�N%d��%d��(%s)�ł��B\n", select_d, return_date.y, return_date.m, return_date.d, ws[(return_date.y + return_date.y / 4 - return_date.y / 100 + return_date.y / 400 + (13 * return_date.m + 8) / 5 + return_date.d) % 7]);
	}
	else if (select_AorB == 2)
	{
		printf("������܂Ői�߂܂����H�F");
		scanf("%d", &select_d);

		return_date = After(input_date, select_d);

		putchar('\n');

		printf("%d�����%d�N%d��%d��(%s)�ł��B\n", select_d, return_date.y, return_date.m, return_date.d, ws[(return_date.y + return_date.y / 4 - return_date.y / 100 + return_date.y / 400 + (13 * return_date.m + 8) / 5 + return_date.d) % 7]);
	}

	return 0;
}