#include <iostream>

using namespace std;

void main()
{
	int a = 10; 
	//����һ��ָ�����
	int* p_a;
	
	//������a�ĵ�ַ��ָ��
	p_a = &a;

	//�鿴���������ĵ�ַ
	cout << "a address is " << &a << endl;
	cout << "p_a 's value is " << p_a << endl;

	cout << "****************" << endl;

	//ͨ *ָ������� = ֵ ���Լ�Ӷ�д�ڴ��ַ�ڵ�ֵ
	*p_a = 1000;
	cout << "a = " << a << endl;
	cout << "p_a = " << *p_a << endl;
}