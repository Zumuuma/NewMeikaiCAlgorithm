//�z��a�̑S�v�f�̕��т��V���b�t������(����ׂȏ��ɕ��ׂ�)�֐����쐬����B(n�͗v�f���ł���)
//void shuffle(int a[], int n);

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

//---type�^��x��y�̒l������---
#define swap(type, x, y) \
	do                   \
	{                    \
		type t = x;      \
		x = y;           \
		y = t;           \
	} while (0)

void shuffle(int a[], int n)
{
	int i, j;

	srand(time(NULL));
	for (i = n - 1; i > 0; i--) //i>0�Ȃ̂�i>=0�Ȃ̂��s��(�����炭�Ai>0�ŗǂ��͂�)
	{
		j = rand() % (i + 1);
		if (i != j)
		{
			swap(int, a[i], a[j]);
		}
	}
}

int main(void)
{

	int i;
	int *x; //�z��̐擪�v�f�ւ̃|�C���^
	int nx; //�z��x�̗v�f��

	puts("�z��̗v�f���V���b�t�����܂��B");
	printf("�v�f���F");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); //�v�f��nx��int�^�z��x���쐬

	printf("%d�̐�������͂��Ă��������B\n", nx);
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	shuffle(x, nx); //�z��x�̗v�f���V���b�t��

	printf("�z��̗v�f���V���b�t�����܂����B\n");

	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}

	free(x);

	return 0;
}