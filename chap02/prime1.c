//1000�ȉ��̑f�����(��1��)

#include <stdio.h>

int main(void)
{
	int i, n;
	unsigned long counter = 0; //���Z�̉�

	for (n = 2; n <= 1000; n++)
	{
		for (i = 2; i < n; i++)
		{
			counter++;
			if (n % i == 0) //����؂��Ƒf���ł͂Ȃ�
			{
				break; //����ȊO�̌J��Ԃ��͕s�v
			}
		}
		if (n == i) //�Ō�܂Ŋ���؂�Ȃ�����
		{
			printf("%d\n", n);
		}
	}

	printf("���Z���s�����񐔁F%lu\n", counter);

	return 0;
}