#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr = &arr[0];//����һ��ָ�������ָ���������Ԫ��
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
	for (int i = 0; i <= sz - 1; i++)
	{
		printf("%d ", *(parr + i));
	}

	return 0;
}