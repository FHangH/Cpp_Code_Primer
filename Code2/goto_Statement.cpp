#include <iostream>

using namespace std;

void main()
{
	cout << "S" << endl;
	cout << "A" << endl;

	goto GotoTarget; //�˴��� goto �����Ϊ GotoTarget

	cout << "B" << endl;
	cout << "C" << endl;
	cout << "D" << endl;

	GotoTarget: //����ֱ����ת���˴�������������ִ��
	cout << "E" << endl;
}
