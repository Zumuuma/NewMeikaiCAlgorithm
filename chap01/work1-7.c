//sum_for.c�̃v���O���������Ƃɂ���
//���Ƃ���n��7�ł���΁A�w�P����V�܂ł̘a�͂Q�W�ł��B�x�ƕ\������̂ł͂Ȃ�
//�w�P�{�Q�{�R�{�S�{�T�{�U�{�V���Q�W�x�ƕ\������v���O�������쐬����B

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
		if (i == n)
		{
			printf("%d = %d", i, sum);
		}
		else
		{
			printf("%d + ", i);
		}
	}

	return 0;
}