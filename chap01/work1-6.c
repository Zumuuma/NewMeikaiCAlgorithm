//sum_while.c��while���I�����_�ɂ�����ϐ�i�̒l��n+1�ɂȂ邱�Ƃ��m�F����B
//(�ϐ�i�̒l��\������悤�ɏ����������v���O�������쐬���邱��)�B

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
	putchar('\n');
	while (i <= n) //i��n�ȉ��ł���ΌJ��Ԃ�
	{
		printf("i�̒l�F%d\n", i);
		sum += i; //sum��i��������
		i++;	  //i�̒l���C���N�������g
	}

	printf("i�̒l�F%d\n", i);
	printf("�P����%d�܂ł̘a��%d�ł��B\n", n, sum);

	return 0;
}