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
	else
	{
		printf("����͂R�ł��B\n");
	}

	return 0;
}