//�z��v�f�̕��т̔��]�̌o�߂𒀈�\������悤��rev_ary.c�������������v���O�������쐬����B
//(�֐�ary_reverse�Ɏ�������邱�ƁB)

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

//---�v�f��n�̔z��a�̗v�f�̕��т𔽓]---
void ary_reverse(int a[], int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		printf("%d ", a[j]);
	}
	putchar('\n');

	for (i = 0; i < n / 2; i++)
	{
		printf("a[%d]��a[%d]���������܂��B\n", i, n - i - 1);
		swap(int, a[i], a[n - i - 1]);
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[j]);
		}
		putchar('\n');
	}
	puts("���]���I�����܂����B");
}

int main(void)
{
	int i;
	int *x; //�z��̐擪�v�f�ւ̃|�C���^
	int nx; //�z��x�̗v�f��

	printf("�v�f���F");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); //�v�f��nx��int�^�z��x���쐬

	printf("%d�̐�������͂��Ă��������B\n", nx);
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	putchar('\n');
	ary_reverse(x, nx); //�z��x�̗v�f�̕��т𔽓]
	putchar('\n');

	printf("�z��̗v�f�̕��т𔽓]���܂����B\n");
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] = %d\n", i, x[i]);
	}

	free(x);

	return 0;
}