#include <iostream>

using namespace std;

struct stuInfo
{
	string name;
	int age;
};

void printInfo(stuInfo s)
{
	cout << "Value Transfer: " << endl;
	cout << "Modify Argument before: ";
	cout << "Name: " << s.name << "  Age: " << s.age << endl;

	s.age = 99;
	cout << "Modify Argument later: ";
	cout << "Name: " << s.name << "  Age: " << s.age << endl;
}

void printInfo2(stuInfo* p_s1)
{
	cout << "Pointer Address Transfer: " << endl;
	cout << "Modify Argument before: ";
	cout << "Name: " << p_s1->name << "  Age: " << p_s1->age << endl;

	p_s1->age = 99;
	cout << "Modify Argument later: ";
	cout << "Name: " << p_s1->name << "  Age: " << p_s1->age << endl;
}

void main()
{
	stuInfo s = {"FH", 23};
	stuInfo p_s1 = { "CYL", 22 };

	printInfo(s);
	cout << "====================" << endl;
	printInfo2(&p_s1);
}