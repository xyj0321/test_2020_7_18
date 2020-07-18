#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//在一个作用域中不能出现相同的名字
//c语言中有两个作用域全局作用域，局部作用域

//命名空间的定义格式 1，以及概念
//N1是一个命名空间
//a的Add是N1命名空间的成员
//命名空间：实际就是一个带有名字的作用域
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
////命名空间定义 2----命名空间可以嵌套===
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
////命名空间定义 3
//
//int a = 20;
//int main()
//{
//	int a = 30;
//	//有多个同名的a处在不同的作用域，在函数中直接访问，是按照就近原则
//	printf("%d\n", a);//访问局部作用域的变量a
//
//	printf("%d\n", ::a);//访问全局作用域的变量a--->::作用域运算符
//
//	printf("%d\n", N1::a);//访问N1命名空间的a变量--->N1::a
//	printf("%d\n", N2::a);
//	printf("%d\n", N2::N3::a);//访问N2里面的N3
//	return 0;
//}


//两个命名空间名字相同
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
////第一种变量访问方式：
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", N::b);
//}
//
////第二种变量访问方式,全局作用域不能存在a
////using N::a;
////int main()
////{
////	printf("%d\n", a);
////}
//
////第三种访问方式,相当于将N命名空间的所有成员访问到，缺陷，与全局变量产生冲突，如果冲突按照方式一进行访问
////using namespace N;
////int main()
////{
////	printf("%d\n", a);
////	printf("%d\n", b);
////}

//C++要兼容c语言，而c语言中已经有啦输入和输出：scanf和printf

//int main()
//{
//	//printf:c语言在输出时，需要记大量的格式控制，格式控制给错时，输出的结果会有问题
//	
//	//C++输入和输出更加方便，简洁
//	return 0;
//}

//printf:c语言在输出时，需要记大量的格式控制，格式控制给错时，输出的结果会有问题
//C++输入和输出更加方便，简洁
//在C++旧版本中，输入输出头文件为<iostream.h>,比如vs6.0
//#include<iostream.h>
///现在新的编译器：//printf:c语言在输出时，需要记大量的格式控制，格式控制给错时，输出的结果会有问题
	
//C++输入和输出更加方便，简洁
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
//	cin >> a;//输入a
//	cout << a << endl;
//	cin >>a >> b;
//	cout << "a\n" << b << endl;
//	cin >>a >> b >> c;
//	cout << a << b << c << endl;
//	return 0;
//
//}

//第四不同：
//函数不同的地方
//C语言中定义函数,c语言编译器对函数返回值类型及参数类型检测不严格
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

//C++编译器对函数参数类型以及返回值类型检测更加严格
