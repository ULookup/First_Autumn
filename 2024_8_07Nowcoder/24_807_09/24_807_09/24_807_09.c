#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int seconds = 0;
    printf("����������:>");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int se = (seconds % 3600) % 60;
    printf("%d3ʱ%3d��%3d��", hours, minutes, se);
    return 0;
}