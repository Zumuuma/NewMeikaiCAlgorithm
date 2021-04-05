/* ���K1-5�@�O�̐����l��ǂݍ���Œ����l�����߂�i���ׂĂ̑召�֌W�ɑ΂��Ċm�F�j<�͔͉𓚂��>*/

#include <stdio.h>

/*
�@�ŏ���if���̔���
	if ((b >= a && c<= a) || (b <= a && c >= a)
�ɒ��ڂ��܂��B������b >= a�����b <= a�̔���𗠕Ԃ�������i�����I�ɓ���̔���j���A����else�ȍ~��
	else if ((a > b && c < b) || (a < b && c > b)
�ƍs���܂��B�܂�A�ŏ���if���������Ȃ������ꍇ�A2�Ԗڂ�if�ł��i�����I�Ɂj����������s���Ă��邽�߁A�����������Ȃ�̂ł��B
*/

/*--- a, b, c�̒����l�����߂� ---*/
int med3(int a, int b, int c)
{
	if ((b >= a && c <= a) || (b <= a && c >= a))
		return a;
	else if ((a > b && c < b) || (a < b && c > b))
		return b;
	return c;
}

int main(void)
{
	printf("med3(%d,%d,%d) = %d\n", 3, 2, 1, med3(3, 2, 1)); /* [A] a��b��c */
	printf("med3(%d,%d,%d) = %d\n", 3, 2, 2, med3(3, 2, 2)); /* [B] a��b��c */
	printf("med3(%d,%d,%d) = %d\n", 3, 1, 2, med3(3, 1, 2)); /* [C] a��c��b */
	printf("med3(%d,%d,%d) = %d\n", 3, 2, 3, med3(3, 2, 3)); /* [D] a��c��b */
	printf("med3(%d,%d,%d) = %d\n", 2, 1, 3, med3(2, 1, 3)); /* [E] c��a��b */
	printf("med3(%d,%d,%d) = %d\n", 3, 3, 2, med3(3, 3, 2)); /* [F] a��b��c */
	printf("med3(%d,%d,%d) = %d\n", 3, 3, 3, med3(3, 3, 3)); /* [G] a��b��c */
	printf("med3(%d,%d,%d) = %d\n", 2, 2, 3, med3(2, 2, 3)); /* [H] c��a��b */
	printf("med3(%d,%d,%d) = %d\n", 2, 3, 1, med3(2, 3, 1)); /* [I] b��a��c */
	printf("med3(%d,%d,%d) = %d\n", 2, 3, 2, med3(2, 3, 2)); /* [J] b��a��c */
	printf("med3(%d,%d,%d) = %d\n", 1, 3, 2, med3(1, 3, 2)); /* [K] b��c��a */
	printf("med3(%d,%d,%d) = %d\n", 2, 3, 3, med3(2, 3, 3)); /* [L] b��c��a */
	printf("med3(%d,%d,%d) = %d\n", 1, 2, 3, med3(1, 2, 3)); /* [M] c��b��a */

	return 0;
}