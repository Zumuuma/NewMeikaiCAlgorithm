#include <stdio.h>

int main(void)
{
	int n;

	printf("��������͂��Ă��������F");
	scanf("%d", &n);

	if (n == 1)
	{
		printf("����͂P�ł��B\n");
	}
	else if (n == 2)
	{
		printf("����͂Q�ł��B\n");
	}
	else if (n == 3)
	{
		printf("����͂R�ł��B\n");
	}
	else
		; //�󕶁i�����I�ɉ������Ȃ����j

	return 0;
}