//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//long GCC(long n, long m)
//{
//	while (m != 0)//m����������������λ�ã���m=0ʱ��˵���Ѿ��ҵ�����С��Լ��
//	{
//		int tmp = m;//շת����ĺ���˼��,������������������ʱtmpΪԭ����������������һ�Σ���
//		m = n % m;  //���ʱ�򡰽����������������������Ϊ�µ���������
//		n = tmp;    //ԭ����������Ϊ�µĳ�����
//	}
//	return m;
//}
//long GCD(long n, long m)
//{
//	for (int i = 0;; i++)
//	{
//		if ((GCC(n, m) * i > n) && (GCC(n, m) > m))
//		{
//			return GCC(n, m) * i;
//		}
//	}
//}
//int main()
//{
//	long n = 0;
//	long m = 0;
//	scanf("%ld %ld", &n, &m);
//	GCC(n, m);
//	GCD(n, m);
//	printf("%ld", GCC(n, m) + GCD(n, m));
//
//	return 0;
//}
#include <stdio.h>

// ŷ������㷨ʵ��
long gcd(long n, long m) {
	while (m != 0) {
		long temp = m;
		m = n % m;
		n = temp;
	}
	return n;
}

// ������С�������ĺ���
long lcm(long n, long m) {
	return (n / gcd(n, m)) * m; // �ȼ���GCD��Ȼ��ʹ�ù�ʽ����LCM
}

int main() {
	long n = 0;
	long m = 0;
	scanf("%ld %ld", &n, &m);
	long result = gcd(n, m) + lcm(n, m); // ����GCD��LCM�ĺ�
	printf("%ld\n", result);
	return 0;
}