#include <iostream>

using namespace std;

void main()
{
	//true = 1; false = 0;
	bool b1 = true;
	bool b2 = false;

	cout << "Bool b1 : " << b1 << endl;
	cout << "Bool b2 : " << b2 << endl;

	//计算bool类占用的大小
	cout << "Bool size is : " << sizeof(bool) << endl;
}