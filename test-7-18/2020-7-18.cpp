#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��һ���������в��ܳ�����ͬ������
//c������������������ȫ�������򣬾ֲ�������

//�����ռ�Ķ����ʽ 1���Լ�����
//N1��һ�������ռ�
//a��Add��N1�����ռ�ĳ�Ա
//�����ռ䣺ʵ�ʾ���һ���������ֵ�������
//namespace N1
//{
//	int a = 10;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//}
//
////�����ռ䶨�� 2----�����ռ����Ƕ��===
////
//namespace N2
//{
//	int a = 40;
//	int Sub(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N3
//	{
//		int a = 50;
//		int Mul(int left, int right)
//		{
//			return left + right;
//		}
//	}
//}
////�����ռ䶨�� 3
//
//int a = 20;
//int main()
//{
//	int a = 30;
//	//�ж��ͬ����a���ڲ�ͬ���������ں�����ֱ�ӷ��ʣ��ǰ��վͽ�ԭ��
//	printf("%d\n", a);//���ʾֲ�������ı���a
//
//	printf("%d\n", ::a);//����ȫ��������ı���a--->::�����������
//
//	printf("%d\n", N1::a);//����N1�����ռ��a����--->N1::a
//	printf("%d\n", N2::a);
//	printf("%d\n", N2::N3::a);//����N2�����N3
//	return 0;
//}


//���������ռ�������ͬ
//namespace N
//{
//	int a = 10;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//}
//namespace N
//{
//	int b = 20;
//	int Sub(int left, int right)
//	{
//		return left + right;
//	}
//
//}
//
////��һ�ֱ������ʷ�ʽ��
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", N::b);
//}
//
////�ڶ��ֱ������ʷ�ʽ,ȫ���������ܴ���a
////using N::a;
////int main()
////{
////	printf("%d\n", a);
////}
//
////�����ַ��ʷ�ʽ,�൱�ڽ�N�����ռ�����г�Ա���ʵ���ȱ�ݣ���ȫ�ֱ���������ͻ�������ͻ���շ�ʽһ���з���
////using namespace N;
////int main()
////{
////	printf("%d\n", a);
////	printf("%d\n", b);
////}

//C++Ҫ����c���ԣ���c�������Ѿ���������������scanf��printf

//int main()
//{
//	//printf:c���������ʱ����Ҫ�Ǵ����ĸ�ʽ���ƣ���ʽ���Ƹ���ʱ������Ľ����������
//	
//	//C++�����������ӷ��㣬���
//	return 0;
//}

//printf:c���������ʱ����Ҫ�Ǵ����ĸ�ʽ���ƣ���ʽ���Ƹ���ʱ������Ľ����������
//C++�����������ӷ��㣬���
//��C++�ɰ汾�У��������ͷ�ļ�Ϊ<iostream.h>,����vs6.0
//#include<iostream.h>
///�����µı�������//printf:c���������ʱ����Ҫ�Ǵ����ĸ�ʽ���ƣ���ʽ���Ƹ���ʱ������Ľ����������
	
//C++�����������ӷ��㣬���
#include<iostream>
using namespace std;
//int main()
//{
//	cout << 10 << endl; 
//	cout << 12.34 << endl;
//	cout << "abcdef\n";
//	cout << 888 << "" << "!!!" << endl;
//}
//

//int main()
//{
//	int a, b;
//	float c;
//	//char d;
//	cin >> a;//����a
//	cout << a << endl;
//	cin >>a >> b;
//	cout << "a\n" << b << endl;
//	cin >>a >> b >> c;
//	cout << a << b << c << endl;
//	return 0;
//
//}

//���Ĳ�ͬ��
//������ͬ�ĵط�
//C�����ж��庯��,c���Ա������Ժ�������ֵ���ͼ��������ͼ�ⲻ�ϸ�
//test1()
//{
//	printf("test1()\n");
//}
//void test2(int a)
//{
//	printf("test2():%d\n",a)
//}
//int main()
//{
//	int a=test
//
//}

//C++�������Ժ������������Լ�����ֵ���ͼ������ϸ�
