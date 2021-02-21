#include <iostream>

using namespace std;

struct stuInfo
{
	string name;
	int age;
};

void main()
{
	stuInfo stu = { "FH", 23 };
	stuInfo* p_stu = &stu;

	cout << "Name: " << p_stu->name << "  Age: " << p_stu->age << endl;
}