//����������n�i�̐����s���~�b�h��\������֐����쐬����Bvoid nrpira(int n);
//��i�s�ڂɕ\�����鐔����i%10�ɂɂ���ċ��߂邱�ƁB

#include <stdio.h>

void nrpira(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			putchar(' ');
		}

		for (int j = 0; j < (n - i) * 2 + 1; j++)
		{
			printf("%d", i % 10);
		}
		putchar('\n');
	}
}

int main(void)
{
	int value;

	puts("����������n�i�̐����s���~�b�h��\�����܂��B");
	printf("�i���F");
	scanf("%d", &value);

	nrpira(value);

	return 0;
}