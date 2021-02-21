#include <iostream>
#include <time.h>

using namespace std;

struct stuInfo
{
	string name;
	int age;
};

struct teaInfo
{
	string name;
	stuInfo sArr[5];
};

void noteValue(teaInfo tArr[], int tLength)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < tLength; i++)
	{
		tArr[i].name = "Tea_";
		tArr[i].name += nameSeed[i];

		for (int j = 0; j < 5; j++)
		{
			tArr[i].sArr[j].name = "Stu_";
			tArr[i].sArr[j].name += nameSeed[j];
			int ranAge = rand() % 21 + 10;
			tArr[i].sArr[j].age = ranAge;
		}
	}
}

void printInfo(teaInfo tArr[], int tLength)
{
	for (int i = 0; i < tLength; i++)
	{
		cout << tArr[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t" << "Name: " << tArr[i].sArr[j].name << "  Age: " << tArr[i].sArr[j].age << endl;
		}
	}
}

void main()
{
	teaInfo tArr[3];
	int tLength = sizeof(tArr) / sizeof(tArr[0]);
	srand((unsigned int)time(NULL));
	noteValue(tArr, tLength);
	printInfo(tArr, tLength);
}