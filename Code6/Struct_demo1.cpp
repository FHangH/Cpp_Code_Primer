#include <iostream>

using namespace std;

//语法：struct 结构体名 ｛结构体成员列表｝；
struct studentID
{
	string name;
	int age;
};

void main()
{
	//1. struct 结构体名 变量名；
	struct studentID s1;
	s1.age = 23;
	s1.name = "FH";
	cout << "name: " << s1.name << "  age: " << s1.age << endl;

	//2. struct 结构体名 = ｛成员1值，成员2值，...｝；
	struct studentID s2 = {"XX", 99};
	cout << "name: " << s2.name << "  age: " << s2.age << endl;
	
}