/*
	2�̐��l��ǂݍ���ŁA���߂̐��l�̉�������\������
*/

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("��̐�������͂���B");
	printf("����a�F");
	scanf_s("%d", &a);

	printf("����b�F");
	scanf_s("%d", &b);

	double ans = ((double)a / (double)b) * 100;
	printf("a�̒l��b��%f%%�ł��B\n", ans);

	return 0;
}
