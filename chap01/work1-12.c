//��ƍ��Ɋ|���鐔���t�������̕\��\������v���O�������쐬����B
//�\���ɂ́A�c���L������'|'�A�}�C�i�X�L������'-'�A�v���X�L������'+'��p���邱�ƁB

#include <stdio.h>

int main(void)
{
	int i, j;

	printf("�@ |");

	for (i = 1; i <= 9; i++)
	{
		printf("�@%d", i);
	}

	putchar('\n');
	printf("---+---------------------------\n");

	for (i = 1; i <= 9; i++)
	{
		printf(" %d |", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%3d", i * j);
		}
		putchar('\n');
	}

	return 0;
}