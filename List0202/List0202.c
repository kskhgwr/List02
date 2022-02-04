/*
    読み込んだ数値の最下位桁の数値を表示 - 16進数
*/

#include<stdio.h>

int main(void)
{
    int no;

    printf("整数を入力せよ：");
    scanf_s("%x", &no);             // 整数値を読み込む

    printf("最下位桁は%xです。\n", no % 0x10);

    return 0;
}