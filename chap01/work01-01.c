//�l�l�̍ő�l�����߂�֐�max4���쐬����B

#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max = a; //�Ƃ肠�����ő�l�Ƃ��Ă���

	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	if (d > max)
	{
		max = d;
	}

	return max;
}

int main(void)
{
	int a, b, c, d;
	int max;

	printf("�S�̐����̍ő�l�����߂܂��B\n");
	printf("a�̒l�F");
	scanf("%d", &a);
	printf("b�̒l�F");
	scanf("%d", &b);
	printf("c�̒l�F");
	scanf("%d", &c);
	printf("d�̒l�F");
	scanf("%d", &d);

	printf("�ő�l��%d�ł��B\n", max4(a, b, c, d));

	return 0;
}