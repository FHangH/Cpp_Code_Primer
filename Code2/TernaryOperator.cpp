#include <iostream>

using namespace std;

void main()
{
	int a = 10, b = 20;
	int c;
	
	c = (a > b ? a : b);
	cout << "c = " << c << endl;

	//三目运算符表达式返回的是 变量，所以可以直接作为左值被赋值；
	(a < b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
 }
