//���p�񓙕ӎO�p�`��\�����镔����Ɨ������āA�ȉ��̌`���̊֐��Ƃ��Ď�������B
//����ɁA���p�����㑤�A�E�㑤�A�E�����̓񓙕ӎO�p�`��\������֐����쐬����B

#include <stdio.h>

void triangleLB(int n) //�����������p�̓񓙕ӎO�p�`��\��
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleLU(int n) //���㑤�����p�̓񓙕ӎO�p�`��\��
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= i; j--)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleRU(int n) //�E�㑤�����p�̓񓙕ӎO�p�`��\��
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i - 1; j++)
		{
			putchar(' '); //�����߂͋󔒂ō��
		}
		for (int j = 5; j >= i; j--)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleRB(int n) //�E���������p�̓񓙕ӎO�p�`��\��
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			putchar(' '); //�����߂͋󔒂ō��
		}
		for (int j = 1; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
}

int main(void)
{
	int n;

	do
	{
		printf("���i�̎O�p�`�ł����F");
		scanf("%d", &n);
	} while (n <= 0);

	triangleLB(n); //�����������p�̓񓙕ӎO�p�`��\��
	putchar('\n');
	triangleLU(n); //���㑤�����p�̓񓙕ӎO�p�`��\��
	putchar('\n');
	triangleRU(n); //�E�㑤�����p�̓񓙕ӎO�p�`��\��
	putchar('\n');
	triangleRB(n); //�E���������p�̓񓙕ӎO�p�`��\��

	return 0;
}