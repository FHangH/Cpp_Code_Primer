#include <iostream>

using namespace std;

void main()
{
	int a = 10; 
	//定义一个指针变量
	int* p_a;
	
	//将变量a的地址给指针
	p_a = &a;

	//查看两个变量的地址
	cout << "a address is " << &a << endl;
	cout << "p_a 's value is " << p_a << endl;

	cout << "****************" << endl;

	//通 *指针变量名 = 值 可以间接读写内存地址内的值
	*p_a = 1000;
	cout << "a = " << a << endl;
	cout << "p_a = " << *p_a << endl;
}