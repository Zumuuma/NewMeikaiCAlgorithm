//�l�l�̍ŏ��l�����߂�֐�min4���쐬����B

#include <stdio.h>

int min4(int a, int b, int c, int d)
{
	int min = a; //�Ƃ肠�����ŏ��l�Ƃ��Ă���

	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	if (d < min)
	{
		min = d;
	}

	return min;
}

int main(void)
{
	int a, b, c, d;
	int min;

	printf("�S�̐����̍ŏ��l�����߂܂��B\n");
	printf("a�̒l�F");
	scanf("%d", &a);
	printf("b�̒l�F");
	scanf("%d", &b);
	printf("c�̒l�F");
	scanf("%d", &c);
	printf("d�̒l�F");
	scanf("%d", &d);

	printf("�ŏ��l��%d�ł��B\n", min4(a, b, c, d));

	return 0;
}