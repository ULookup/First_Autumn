#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char input = 0;
    while (scanf("%c", &input) == 1)
    {
        getchar();//���ڡ����ա����س���������һ���ַ�
        printf("%c\n", input + 32);
    }
    return 0;
}