#include <iostream>

using namespace std;

//�﷨��struct �ṹ���� ���ṹ���Ա�б����
struct studentID
{
	string name;
	int age;
};

void main()
{
	//1. struct �ṹ���� ��������
	struct studentID s1;
	s1.age = 23;
	s1.name = "FH";
	cout << "name: " << s1.name << "  age: " << s1.age << endl;

	//2. struct �ṹ���� = ����Ա1ֵ����Ա2ֵ��...����
	struct studentID s2 = {"XX", 99};
	cout << "name: " << s2.name << "  age: " << s2.age << endl;
	
}