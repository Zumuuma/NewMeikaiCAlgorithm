//�O��(work02-01)�����������āA�g���̍��v�l�����߂�v���O�������쐬����B
//���v�l�����߂�葱���́A�ȉ��̌`���̊֐��Ƃ��Ď������邱�ƁB
//int sumof(const int a[], int n);

#include <stdio.h>
#include <stdlib.h>

//---�v�f��n�̔z��a�̗v�f�̍��v�l�����߂�---
int sumof(const int a[], int n)
{
	int i;
	int sum = a[0]; //���v�l

	for (i = 1; i < n; i++)
	{
		sum += a[i];
	}

	return sum;
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

	printf("���v�l��%d�ł��B\n", sumof(height, number));

	free(height); //�z��height��j��

	return 0;
}