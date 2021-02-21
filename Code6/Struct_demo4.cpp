#include <iostream>

using namespace std;

struct stuInfo
{
	string name;
	int age;
};

struct teaInfo
{
	string name;
	int id;
	struct stuInfo stu;
};

void main()
{
	stuInfo s1 = { "FH", 23 };
	//stuInfo s2 = { "CYL", 22 };

	teaInfo t1 = { "XX", 1001, s1};
	
	teaInfo t2;
	t2.name = "YY";
	t2.id = 1002;
	t2.stu.name = "CYL";
	t2.stu.age = 22;

	cout << "TeacherName: " << t1.name << "  TeacherID: " << t1.id 
		<< "  StudentName: " << s1.name << "  StudentAge: " << s1.age << endl;
	cout << "TeacherName: " << t2.name << "  TeacherID: " << t2.id 
		<< "  StudentName: " << t2.stu.name << "  StudentAge: " << t2.stu.name << endl;
}