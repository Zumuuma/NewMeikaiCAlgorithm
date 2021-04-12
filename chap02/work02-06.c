//card_conv.c�̊֐�card_convr�����������āA�z��̐擪���ɉ��ʌ��ł͂Ȃ���ʌ����i�[����֐�card_conv���쐬����B
//int card_conv(unsigned x, int n, char d[]);

#include <stdio.h>

#define swap(type, x, y) \
	do                   \
	{                    \
		type t = x;      \
		x = y;           \
		y = t;           \
	} while (0)

//---�����lx��n�i���ɕϊ����Ĕz��d�ɏ�ʌ����i�[---
int card_conv(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cnt;		//������
	int digits = 0; //�ϊ���̌���

	if (x == 0) //0�ł����
	{
		d[digits++] = dchar[0]; //�ϊ����0
	}
	else
	{
		while (x)
		{
			d[digits++] = dchar[x % n]; //n�Ŋ�������]���i�[
			x /= n;
		}
	}

	for (int i = 0; i < digits / 2; i++) //�֐�card_conv���Ŕz����𔽓]������
	{
		swap(char, d[i], d[digits - i - 1]);
	}

	return digits;
}

int main(void)
{
	int i;
	unsigned no;   //�ϊ����鐮��
	int cd;		   //�
	int dno;	   //�ϊ���̌���
	char cno[512]; //�ϊ���̐��l�̊e���̐������i�[���镶���̔z��
	int retry;	   //������x�H

	puts("10�i������ϊ����܂��B");

	do
	{
		printf("�ϊ�����񕉂̐����F");
		scanf("%u", &no);

		do
		{
			printf("���i���ɕϊ����܂����i2-36�j�F");
			scanf("%d", &cd);
		} while (cd < 2 || cd > 36);

		dno = card_conv(no, cd, cno); //no��cd�i���ɕϊ�

		printf("%d�i���ł�", cd);
		for (i = 0; i < dno; i++) //��ʌ����珇�ɕ\��
		{
			printf("%c", cno[i]);
		}
		printf("�ł��B\n");

		printf("������x���܂����i1...�͂�/0...�������j�F");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}