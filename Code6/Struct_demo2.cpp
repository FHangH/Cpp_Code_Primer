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

	//�޸Ľṹ�������е�0��Ԫ�ص�ֵ
	stuInfoArr[0] = { "FH", 23 };

	//�޸Ľṹ�������е�1��Ԫ�ص�ֵ
	stuInfoArr[1].name = "CYL";
	stuInfoArr[1].age = 22;

	for (int i = 0; i < sizeof(stuInfoArr) / sizeof(stuInfoArr[0]); i++)
	{
		cout << "Name: " << stuInfoArr[i].name
			<< "  Age: " << stuInfoArr[i].age
			<< endl;
	}
}