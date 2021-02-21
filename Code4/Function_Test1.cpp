#include <iostream>

using namespace std;

void swap(int num1, int num2)
{
	cout << "值传递前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "***************" << endl;

	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "值传递后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "***************" << endl;
}

void main()
{
	int a = 10;
	int b = 20;

	cout << "最先执行main中传递前 a值 和 b值" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "***************" << endl;

	swap(a, b);

	cout << "最后执行main中传递后 a值 和 b值" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
