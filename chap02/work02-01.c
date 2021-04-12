//ary_max.c�̃v���O�������ŏ��l�����߂�悤�ɏ����������v���O�������쐬����B
//�ŏ��l�����߂�葱���́A�ȉ��̌`���̊֐��Ƃ��Ď������邱�ƁB
//int minof(const int a[], int n);

#include <stdio.h>
#include <stdlib.h>

//---�v�f��n�̔z��a�̗v�f�̍ő�l�����߂�---
int minof(const int a[], int n)
{
	int i;
	int min = a[0]; //�ŏ��l

	for (i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	return min;
}

int main(void)
{
	int i;
	int *height; //�z��̐擪�v�f�ւ̃|�C���^
	int number;	 //�l�����z��height�̗v�f��

	printf("�l���F");
	scanf("%d", &number);

	height = calloc(number, sizeof(int)); //�v�f��number�̔z��𐶐�

	printf("%d�l�̐g������͂��Ă��������B\n", number);
	for (i = 0; i < number; i++)
	{
		printf("height[%d]�F", i);
		scanf("%d", &height[i]);
	}

	printf("�ŏ��l��%d�ł��B\n", minof(height, number));

	free(height); //�z��height��j��

	return 0;
}