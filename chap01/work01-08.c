//���Ƃ��΁A1����10�܂ł̘a�́i�P�{�P�O�j*�T�ɂ���ċ��߂���B
//�K�E�X�̕��@�ƌĂ΂��A���̕��@��p���āA1����n�܂ł̐����̘a�����߂�v���O�������쐬����B

#include <stdio.h>

int main(void)
{
	int n;
	int sum; //�a

	puts("�P����n�܂ł̘a�����߂܂��B");

	printf("n�̒l�F");
	scanf("%d", &n);

	sum = (1 + n) * n / 2;

	printf("�P����%d�܂ł̘a��%d�ł��B\n", n, sum);

	return 0;
}