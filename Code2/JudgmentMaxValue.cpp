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

	if (a > b) //���a �� b ���� a ������ c �Ƚ�
	{
		if (a > c) //���a �� c ���� a ���
		{
			cout << "Max value is a = " << a << endl;
		}
		else //���� c ���
		{
			cout << "Max value is c = " << c << endl;
		}
	}
	else //���b �� a ���� b ������ c �Ƚ�
	{
		if (b > c) //���b �� c ���� b ���
		{
			cout << "Max value is b = " << b << endl;
		}
		else //���� c ���
		{
			cout << "Max value is c = " << c << endl;
		}
	}
}