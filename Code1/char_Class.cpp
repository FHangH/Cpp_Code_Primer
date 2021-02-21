#include <iostream>

using namespace std;

void main()
{
	//定义char
	char c1 = 'a';

	//查看char占用的大小
	cout << "Char c1 size : " << sizeof(char) << endl;

	//查看 'a' 对应的ASCII码
	cout << "Char a by ASCII : " << int(c1) << endl;
}
