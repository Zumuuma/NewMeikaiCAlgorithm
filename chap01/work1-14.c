//�ǂݍ��񂾒i������ӂƂ��Ă�����s��*�L��(NG���[�h)�ŕ\������v���O�������쐬����B

#include <stdio.h>

int main(void)
{
	int i, j;
	int value;

	puts("����s��\�����܂��B");
	printf("�i���́F");
	scanf("%d", &value);

	for (i = 1; i <= value; i++)
	{
		for (j = 1; j <= value; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}