#include <iostream>

using namespace std;

//��ǰ������������������Ϳ��Զ��嵽main����
int maxValue(int a, int b);

void main()
{
	cout << "MaxValue = " << maxValue(10, 20) << endl;
}

//������ǰ��������ʱ����������Ϳ��Զ��嵽main����
int maxValue(int a, int b)
{
	return a > b ? a : b;
}
