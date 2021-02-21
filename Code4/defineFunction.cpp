#include <iostream>

using namespace std;

int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

void main()
{
	int a = 10;
	int b = 20;
	int c;
	c = add(10, 20);
	
	cout << a << " + " << b << " = " << c << endl;
}
