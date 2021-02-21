#include <iostream>

using namespace std;

struct stuInfo
{
	string name;
	int age;
};

void main()
{
	struct stuInfo stuInfoArr[] =
	{
		{"XX", 66},
		{"YY", 99}
	};

	//修改结构体数组中第0个元素的值
	stuInfoArr[0] = { "FH", 23 };

	//修改结构体数组中第1个元素的值
	stuInfoArr[1].name = "CYL";
	stuInfoArr[1].age = 22;

	for (int i = 0; i < sizeof(stuInfoArr) / sizeof(stuInfoArr[0]); i++)
	{
		cout << "Name: " << stuInfoArr[i].name
			<< "  Age: " << stuInfoArr[i].age
			<< endl;
	}
}