#include <iostream>

using namespace std;

//提前声明函数，函数主体就可以定义到main后面
int maxValue(int a, int b);

void main()
{
	cout << "MaxValue = " << maxValue(10, 20) << endl;
}

//有了提前声明，此时，函数主体就可以定义到main后面
int maxValue(int a, int b)
{
	return a > b ? a : b;
}
