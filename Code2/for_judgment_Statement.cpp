#include <iostream>

using namespace std;

void main()
{
	for (int i = 1; i <= 100; i++) //ѭ����ӡ 1 - 100 
	{
		//�жϱ����������Ƿ���������
		if (i % 10 == 7 || i / 10 % 10 == 7 || i % 7 == 0)
		{
			cout << "Yes" << endl; //���������ӡ yes
		}
		else
		{
			cout << i << endl; //������������ӡ ԭ����
		}
	}
}
