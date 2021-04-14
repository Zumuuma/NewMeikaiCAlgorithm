//�֐�dayofyear���A�ϐ�i��days���g�킸�Ɏ�������悤�ɏ���������Bwhile�����g�����ƁB

#include <stdio.h>

//- �e���̓��� -
int mdays[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

//---����year�N�͂��邤�N��---
int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

//---����y�Nm��d���̔N���̌o�ߓ��������߂�---
int dayofyear(int y, int m, int d)
{
	while (m > 1)
	{
		d += mdays[isleap(y)][m - 2];
		m--;
	}

	/*�������̂����̕����������ǂ���
	while (--m)
	{
		d += mdays[isleap(y)][m - 1];
	}*/

	return d;
}

int main(void)
{
	int year, month, day; //�N�E���E��
	int retry;			  //������x�H

	do
	{
		printf("�N�F");
		scanf("%d", &year);
		printf("���F");
		scanf("%d", &month);
		printf("���F");
		scanf("%d", &day);

		printf("�N����%d���ڂł��B\n", dayofyear(year, month, day));

		printf("������x���܂����i�P�E�E�E�͂�/�O�E�E�E�������j�F");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}