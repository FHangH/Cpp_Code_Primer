#include <iostream>

using namespace std;

void main()
{
	//��1 -100 ����100��
	for (int i = 1; i <= 100; i++)
	{
		//���i Ϊż������������ǰѭ����ִ����һ�α���
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
}
