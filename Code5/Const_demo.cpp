#include <iostream>

using namespace std;

void main()
{
	int a = 10;
	int b = 20;

	//1. const修饰指针 --常量指针
	const int* p = &a; // => const *p (常量指针)
	//*p = b; //错误：指针指向的内存空间值不能修改
	p = &b; //指针的地址编号可以改

	//2. const修饰常量 --指针常量
	int* const p1 = &a; // => const p1 (指针常量)
	*p1 = b; //指针指向的内存空间的值可以修改
	//p1 = &b; //错误：指针的地址编号不能修改

	//3. const即修饰指针又修饰常量
	const int* const p2 = &a;
	//*p2 = b; //错误：指针指向的内存空间值不能修改
	//p2 = &b; //错误：指针的地址编号不能修改
}