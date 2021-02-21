#include <iostream>

using namespace std;

struct stuInfo
{
	string name;
	int age;
};

void printInfo(const stuInfo* p_s)
{
	//p_s->age = 99; //const 限定修饰后的机构体 内存值不能被修改
	cout << "Name: " << p_s->name << "  Age: " << p_s->age << endl;
}

void main()
{
	stuInfo p_s = {"FH", 23};
	printInfo(&p_s);
}