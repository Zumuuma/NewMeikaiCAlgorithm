//��̕ϐ�a,b�ɐ����l��ǂݍ����b-a�̒l��\������v���O�������쐬����B
//�Ȃ��A�ϐ�b�ɓǂݍ��񂾒l��a�ȉ��ł���΁A�ϐ�b�̒l���ē��͂����邱�ƁB

#include <stdio.h>

int main(void)
{
	int a, b;
	int sum;

	puts("����a,b��b-a�̒l��\�����܂��B");
	printf("a�̒l�F");
	scanf("%d", &a);
	printf("b�̒l�F");
	scanf("%d", &b);

	do
	{
		puts("a���傫�Ȓl����͂���I");
		printf("b�̒l�F");
		scanf("%d", &b);
	} while (b <= a);

	printf("b-a��%d�ł��B\n", b - a);

	return 0;
}