#include <iostream>

using namespace std;

//1. �޲��޷�
void demo1()
{
	cout << "�޲��޷�" << endl;
}

//2. �в��޷�
void demo2(string str)
{
	cout << str << endl;
}

//3. �޲��з�
string demo3()
{
	cout << "�޲��з�" << endl;
	return "�޲��з�";
}

//4. �в��з�
string demo4(string str)
{
	cout << "�в��з�" << endl;
	return str;
}

void main()
{
	//1. �޲��޷�
	demo1();
	//2. �в��޷�
	demo2("�в��޷�");
	//3. �޲��з�
	demo3();
	//4. �в��з�
	demo4("�в��з�");
}
