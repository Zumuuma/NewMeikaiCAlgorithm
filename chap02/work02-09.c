//�z��b�̑S�v�f��z��a�ɋt���ɃR�s�[����֐����쐬����B(n�͗v�f���ł���)
//void ary_rcopy(int a[], const int b[], int n);

#include <stdio.h>
#include <stdlib.h>

void ary_rcopy(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b[n - i - 1]; //�P�c����擪�ɃR�s�[
	}
}

int main(void)
{

	int i;
	int *x; //�z��̐擪�v�f�ւ̃|�C���^(�R�s�[��)
	int *y; //�z��̐擪�v�f�ւ̃|�C���^(�R�s�[��)
	int nx; //�z��x�̗v�f��

	puts("�z��̗v�f���t���ɃR�s�[���܂��B");
	printf("�v�f���F");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); //�v�f��nx��int�^�z��x���쐬
	y = calloc(nx, sizeof(int)); //�v�f��nx��int�^�z��y���쐬

	printf("%d�̐�������͂��Ă��������B\n", nx);
	for (i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	ary_rcopy(y, x, nx); //�z��x�̗v�f��z��y�֋t���ɃR�s�[

	for (i = 0; i < nx; i++)
	{
		printf("(�\�[�X�f�[�^) x[%d] = %d\n", i, x[i]);
	}

	putchar('\n');
	printf("�z��̗v�f���t���ɃR�s�[���܂����B\n");

	for (i = 0; i < nx; i++)
	{
		printf("(�R�s�[�f�[�^) y[%d] = %d\n", i, y[i]);
	}

	free(x);
	free(y);

	return 0;
}