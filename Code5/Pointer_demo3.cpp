#include <iostream>

using namespace std;

void main()
{
	//ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
	//��ʼ��ָ�����
	int* p = NULL;

	//��ָ��ָ����ڴ�ռ��ǲ��ɷ��ʵģ�0 - 255��ϵͳռ�õģ�
	cout << p << endl;

	*p = 10; //��ʾ�þ���Ч
	cout << p << endl; //ʲô��û��
}