#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n = 0;
    float s = 0;
    float max = 0;
    float min = 100;
    float tmp = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        float j = 0;
        scanf("%f", &j);
        getchar();//���յ��س��� 
        if (j > max)
        {
            max = j;//�������һ���󣬾ͽ�ȥ����֮�򲻽�ȥ
        }
        if (j < min)
        {
            min = j;//�������һ��С���ͽ�ȥ�������򲻽�ȥ
        }
        tmp = j;//������Ŵ˴�ѭ�����������
        s = s + j;//
    }
    printf("%.2f %.2f %.2f", max, min, s / n);


    return 0;
}