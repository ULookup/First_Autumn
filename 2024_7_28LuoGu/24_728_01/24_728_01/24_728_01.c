#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰ:a=%d,b=%d\n", a, b);
	int* pa = &a;
	int* pb = &b;
	printf("a�ĵ�ַΪ:%p,b�ĵ�ַΪ:%p\n", pa, pb);
	a = a ^ b;
	b = a ^ b;//b=(a^b)^b=a^(b^b)=a^0=a
	a = a ^ b;//a=(a^b)^a(���aʵ����Ϊ����ֵ���b����ֵ��Ϊa
	printf("������:a=%d,b=%d\n", a, b);
	return 0;
}