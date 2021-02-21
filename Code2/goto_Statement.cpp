#include <iostream>

using namespace std;

void main()
{
	cout << "S" << endl;
	cout << "A" << endl;

	goto GotoTarget; //此处的 goto 语句标记为 GotoTarget

	cout << "B" << endl;
	cout << "C" << endl;
	cout << "D" << endl;

	GotoTarget: //程序直接跳转至此处，并继续向下执行
	cout << "E" << endl;
}
