/*
    �ǂݍ��񂾐��l�̍ŉ��ʌ��̐��l��\�� - 16�i��
*/

#include<stdio.h>

int main(void)
{
    int no;

    printf("��������͂���F");
    scanf_s("%x", &no);             // �����l��ǂݍ���

    printf("�ŉ��ʌ���%x�ł��B\n", no % 0x10);

    return 0;
}