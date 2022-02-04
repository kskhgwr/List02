/*
    読み込んだ二つの数値の和と積を表示
*/

#include<stdio.h>

int main(void)
{
    int no1, no2;

    puts("二つの整数を入力せよ：");
    printf("整数a："); scanf_s("%d", &no1);        // 整数値を読み込む1
    printf("整数b："); scanf_s("%d", &no2);        // 整数値を読み込む2

    printf("それらの和は%dで積は%dです。\n", no1 + no2, no1 * no2);

    return 0;
}