/*
	2つの数値を読み込んで、初めの数値の何％かを表示する
*/

#include<stdio.h>

int main(void)
{
	int a, b;

	puts("二つの整数を入力せよ。");
	printf("整数a：");
	scanf_s("%d", &a);

	printf("整数b：");
	scanf_s("%d", &b);

	double ans = ((double)a / (double)b) * 100;
	printf("aの値はbの%f%%です。\n", ans);

	return 0;
}
