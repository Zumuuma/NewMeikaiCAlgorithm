//sum_for.c‚ÌƒvƒƒOƒ‰ƒ€‚ğ‚à‚Æ‚É‚µ‚Ä
//‚½‚Æ‚¦‚În‚ª7‚Å‚ ‚ê‚ÎAw‚P‚©‚ç‚V‚Ü‚Å‚Ì˜a‚Í‚Q‚W‚Å‚·Bx‚Æ•\¦‚·‚é‚Ì‚Å‚Í‚È‚­
//w‚P{‚Q{‚R{‚S{‚T{‚U{‚V‚Q‚Wx‚Æ•\¦‚·‚éƒvƒƒOƒ‰ƒ€‚ğì¬‚¹‚æB

#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; //˜a

	puts("‚P‚©‚çn‚Ü‚Å‚Ì˜a‚ğ‹‚ß‚Ü‚·B");

	printf("n‚Ì’lF");
	scanf("%d", &n);

	sum = 0;

	for (i = 1; i <= n; i++) //i=1,2,...,n
	{
		sum += i; //sum‚Éi‚ğ‰Á‚¦‚é
		if (i == n)
		{
			printf("%d = %d", i, sum);
		}
		else
		{
			printf("%d + ", i);
		}
	}

	return 0;
}