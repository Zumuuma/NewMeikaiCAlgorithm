//int�^�̃I�u�W�F�N�g�𓮓I�ɐ������Ĕj��

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x;

	x = calloc(1, sizeof(int)); //int�^�I�u�W�F�N�g�𐶐�

	if (x == NULL)
	{
		puts("�L����̊m�ۂɎ��s���܂����B");
	}
	else
	{
		*x = 57;
		printf("*x = %d\n", *x);
		free(x); //int�^�I�u�W�F�N�g��j��
	}

	return 0;
}