#include <iostream>

using namespace std;

void main()
{
	int a = 10;
	int* p_a = &a;

	cout << "sizeof (p_a) = " << sizeof(p_a) << endl;
	cout << "sizeof (int*) = " << sizeof(int*) << endl;
	cout << "sizeof (float*) = " << sizeof(float*) << endl;
	cout << "sizeof (double*) = " << sizeof(double*) << endl;
	cout << "sizeof (bool*) = " << sizeof(bool*) << endl;
	cout << "sizeof (char*) = " << sizeof(char*) << endl;
	cout << "sizeof (string*) = " << sizeof(string*) << endl;
}