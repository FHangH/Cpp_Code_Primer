#include <iostream>;

using namespace std;

void main()
{
	int a, b, c;

	cout << "Please enter a value : " << endl;
	cin >> a;

	cout << "Please enter b value : " << endl;
	cin >> b;

	cout << "Please enter c value : " << endl;
	cin >> c;

	cout << "***********************" << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	cout << "***********************" << endl;

	if (a > b) //如果a 比 b 大，则 a 继续与 c 比较
	{
		if (a > c) //如果a 比 c 大，则 a 最大
		{
			cout << "Max value is a = " << a << endl;
		}
		else //否则 c 最大
		{
			cout << "Max value is c = " << c << endl;
		}
	}
	else //如果b 比 a 大，则 b 继续与 c 比较
	{
		if (b > c) //如果b 比 c 大，则 b 最大
		{
			cout << "Max value is b = " << b << endl;
		}
		else //否则 c 最大
		{
			cout << "Max value is c = " << c << endl;
		}
	}
}