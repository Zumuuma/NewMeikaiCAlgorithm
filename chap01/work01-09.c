//����a,b���܂߁A���̂������̑S�����̘a�����߂ĕԂ��ȉ��̊֐����쐬����B
//int sumof(int a, int b);
//a��b�̑召�֌W�Ɋ֌W�Ȃ��a�����߂邱�ƁB���Ƃ���a��3��b��5�ł����12��
//a��6��b��4�ł����15�����߂邱�ƁB

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

	puts("����a�Ɛ���b���܂߁A���̊Ԃ̑S�����̘a�����߂܂��B");
	printf("����a�F");
	scanf("%d", &a);
	printf("����b�F");
	scanf("%d", &b);

	printf("����a�Ɛ���b���܂߁A���̊Ԃ̑S�����̘a��%d�ł��B\n", sumof(a, b));

	return 0;
}