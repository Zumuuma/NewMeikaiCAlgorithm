//�P�C�Q�C�E�E�E�Cn�̘a�����߂�ido���ɂ���Đ��̐����l�݂̂�n�ɓǂݍ��ށj

#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; //�a

	puts("�P���炎�܂ł̘a�����߂܂��B");
	do
	{
		printf("���̒l�F");
		scanf("%d", &n);
	} while (n <= 0);

	sum = 0;

	for (i = 1; i <= n; i++) //i=1,2,...,n
	{
		sum += i; //sum��i��������
	}

	printf("�P����%d�܂ł̘a��%d�ł��B\n", n, sum);

	return 0;
}