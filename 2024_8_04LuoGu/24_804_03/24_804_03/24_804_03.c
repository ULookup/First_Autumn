#include <stdio.h>
void print1(int* arr, int sz)
{
	int i = 0;
	printf("����ǰ:");
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void print2(int* arr, int sz)
{
	int i = 0;
	printf("�����:");
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
}
//����Ϊ���ؽ�Ҫ�Ĵ���
//����Ϊ���Ĵ���
int cap(const void* e1, const void* e2)
{
	
	if (*(int*)e1 > *(int*)e2)//ע�⣬�˴�����ֱ��*e1/*e2����Ϊ����Ϊvoid*���ͣ�ֻ�ܴ�ţ����ܷ���
		return 1;
	else if (*(int*)e1 < *(int*)e2)
		return -1;
	else
		return 0;
}
void Swap(char* a,char* b,size_t size)
{
	int x = 0;
	for (x = 0; x < size; x++)
	{
		int tmp = 0;
		tmp = *a;
		*a = *b;
		*b = tmp;
		a++;//����һ���ֽ�һ���ֽڵĽ�������Ϊ���ܽ�����ͬ���������ͣ���Ϊ���������͵Ĵ�С���̶���ֻ��һ���ֽ�һ���ֽ��������
		b++;
	}
}
void bubble_qsort(void* base, size_t num, size_t size, int(*cap)(const void* e1, const void* e2))//��ȷ���û�����ʲô����������δ֪��������void��ʱ��ŵ�ַ
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < num - 1; j++)
		{
			if (cap((char*)base+j*size , (char*)base + (j+1)*size)>0)//Ϊ��Ӧ���ͱ�̣�������(char*)base+j*size�ȼ���һ��Ԫ��һ��Ԫ�صķ��ʣ�ʹ�ö�����͵����ݶ����Խ���Ԫ�ؼ�ıȽ��뽻��
			{
				Swap((char*)base + j*size, (char*)base + (j + 1)*size,size);
				flag = 0;
			}
		}
		if (flag == 1)//flag������Ǳ�������һ���߹�����û�н��н�����˵���Ѿ����򣬳������
			break;
	}
}
int main()
{
	int arr[] = { 1,3,2,3,1,4,5,2,3,6,7,8,9,1,4,7,9,4,4,2, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print1(arr, sz);
	bubble_qsort(arr,(size_t)sz,sizeof(arr[0]),cap);
	print2(arr, sz);
	return 0;
}