//���̐����l��ǂݍ���ŁA���̒l�̌�����\������v���O�������쐬����B
//���Ƃ��΁A135��ǂݍ��񂾂�w���̐���3���ł��B�x�ƕ\�����A
//1314�Ɠǂݍ��񂾂�w���̐���4���ł��B�x�ƕ\�����邱�ƁB
//����ver��

#include <stdio.h>

int main(void)
{
	int value;
	int num = 0;

	puts("���͂����l�̌�����\�����܂��B");
	printf("�l����́F");
	scanf("%d", &value);

	while (value != 0)
	{
		value /= 10;
		num++;
	}

	printf("���̌�����%d���ł��B\n", num);

	return 0;
}

/*
�����������ǂ�ver��

#include <stdio.h>

int main(void)
{
	int value;
	int num = 1;

	puts("���͂����l�̌�����\�����܂��B");
	printf("�l����́F");
	scanf("%d", &value);

	while (value /= 10)
	{
		num++;
	}

	printf("���̌�����%d���ł��B\n", num);

	return 0;
}*/