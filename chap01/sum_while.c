//�P�C�Q�C�E�E�E�Cn�̘a�����߂�iwhile���j

#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; //�a

	puts("�P����n�܂ł̘a�����߂܂��B");

	printf("n�̒l�F");
	scanf("%d", &n);

	sum = 0;
	i = 1;

	while (i <= n) //i��n�ȉ��ł���ΌJ��Ԃ�
	{
		sum += i; //sum��i��������
		i++;	  //i�̒l���C���N�������g
	}

	printf("�P����%d�܂ł̘a��%d�ł��B\n", n, sum);

	return 0;
}