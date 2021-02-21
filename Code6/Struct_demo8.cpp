#include <iostream>
#include "Struct_demo8.h"

using namespace std;

struct roleInfo
{
	string name;
	int age;
	string sex;
};

void upSort(roleInfo rArr[], int rLength)
{
	for (int i = 0; i < rLength - 1; i++)
	{
		for (int j = 0; j < rLength - i - 1; j++)
		{
			if (rArr[j].age > rArr[j + 1].age)
			{
				roleInfo tempInfo = rArr[j];
				rArr[j] = rArr[j + 1];
				rArr[j + 1] = tempInfo;
			}
		}
	}
}

void printInfo(roleInfo rArr[], int rlength)
{
	for (int i = 0; i < rlength; i++)
	{
		cout << "Name: " << rArr[i].name << "  Age: " << rArr[i].age << "  Sex: " << rArr[i].sex << endl;
	}
}

void main()
{
	roleInfo rArr[] =
	{
		{"FH", 23, "M"},
		{"MM", 22, "W"},
		{"XY", 21, "W"}
	};

	int rlength = sizeof(rArr) / sizeof(rArr[0]);

	upSort(rArr, rlength);
	printInfo(rArr, rlength);
}