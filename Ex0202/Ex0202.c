/*
    �ǂݍ��񂾓�̐��l�̘a�Ɛς�\��
*/

#include<stdio.h>

int main(void)
{
    int no1, no2;

    puts("��̐�������͂���F");
    printf("����a�F"); scanf_s("%d", &no1);        // �����l��ǂݍ���1
    printf("����b�F"); scanf_s("%d", &no2);        // �����l��ǂݍ���2

    printf("�����̘a��%d�Őς�%d�ł��B\n", no1 + no2, no1 * no2);

    return 0;
}