#include <iostream>

using namespace std;

//1. 无参无返
void demo1()
{
	cout << "无参无返" << endl;
}

//2. 有参无返
void demo2(string str)
{
	cout << str << endl;
}

//3. 无参有返
string demo3()
{
	cout << "无参有返" << endl;
	return "无参有返";
}

//4. 有参有返
string demo4(string str)
{
	cout << "有参有返" << endl;
	return str;
}

void main()
{
	//1. 无参无返
	demo1();
	//2. 有参无返
	demo2("有参无返");
	//3. 无参有返
	demo3();
	//4. 有参有返
	demo4("有参有返");
}
