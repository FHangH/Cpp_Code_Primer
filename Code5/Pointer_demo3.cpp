#include <iostream>

using namespace std;

void main()
{
	//指针变量指向内存中编号为0的空间
	//初始化指针变量
	int* p = NULL;

	//空指针指向的内存空间是不可访问的（0 - 255是系统占用的）
	cout << p << endl;

	*p = 10; //提示该句无效
	cout << p << endl; //什么都没有
}