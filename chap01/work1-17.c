//n�i�̃s���~�b�h��\������֐����쐬����Bvoid spira(int n);
//��i�s�ڂɂ�(i-1)*2+1�̋L������'*'��\�����邱�ƁB
//(���̂��߁A�ŏI�s�̑�n�s�ڂɂ�(n-1)*2+1�̋L������'*'��\�����邱�ƂɂȂ�B)

#include <stdio.h>

void spira(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i == n) //�ŏI�s�ɓ����������
		{
			for (int j = 1; j <= (n - 1) * 2 + 1; j++)
			{
				putchar('*');
			}
		}
		else
		{
			for (int j = 1; j <= n - i; j++)
			{
				putchar(' '); //�����߂͋󔒂ō��
			}

			for (int j = 1; j <= (i - 1) * 2 + 1; j++)
			{
				putchar('*');
			}
		}
		putchar('\n');
	}
}

int main(void)
{
	int value;

	puts("n�i�̃s���~�b�h��\�����܂��B");
	printf("�i���F");
	scanf("%d", &value);

	spira(value);

	return 0;
}