//ary_max_rand.c�̃v���O������g�������łȂ��l���������Ő�������悤�ɏ����������v���O�������쐬����B
//�l���́A5�ȏ�20�ȉ��̗����Ƃ��邱�ƁB

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

//---�v�f��n�̔z��a�̗v�f�̍ő�l�����߂�---
int maxof(const int a[], int n)
{
	int i;
	int max = a[0]; //�ő�l

	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	return max;
}

int main(void)
{
	int i;
	int *height; //�z��̐擪�v�f�ւ̃|�C���^
	int number;	 //�l�����z��height�̗v�f��

	srand(time(NULL));		  //�������痐���̎��������
	number = 5 + rand() % 16; //5~20�̗����𐶐��E���

	height = calloc(number, sizeof(int)); //�v�f��number�̔z��𐶐�

	for (i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90; //100~189�̗����𐶐��E���
		printf("height[%d] = %d\n", i, height[i]);
	}

	printf("�ő�l��%d�ł��B\n", maxof(height, number));

	free(height); //�z��height��j��

	return 0;
}