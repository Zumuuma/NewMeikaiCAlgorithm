//�P�C�Q�C�E�E�E�Cn�̘a�����߂�ifor���j

#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; //�a

	puts("�P����n�܂ł̘a�����߂܂��B");

	printf("n�̒l�F");
	scanf("%d", &n);

	sum = 0;

	for (i = 1; i <= n; i++) //i=1,2,...,n
	{
		sum += i; //sum��i��������
	}

	printf("�P����%d�܂ł̘a��%d�ł��B\n", n, sum);

	return 0;
}