#include <stdio.h>
void test(int* arr)
{
	int sz2 = sizeof(arr) / sizeof(arr[0]);//x64��һ��ָ�볤Ϊ8.��arr[0]Ϊint���ͣ���Ϊ4
	printf("sz2=%d\n", sz2);
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	printf("sz1=%d\n", sz1);
	test(arr);

	return 0;
}