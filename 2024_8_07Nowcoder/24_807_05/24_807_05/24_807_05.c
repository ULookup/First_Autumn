#include <stdio.h>
int* test()
{
	int n = 100;
	return &n;
}
int main()
{
	int* p = test();//pָ��Ŀռ䱻�ͷ��ˣ��ǿ�ռ�����Ѿ������ڸó�����
	printf("%d\n", *p);
	return 0;
}