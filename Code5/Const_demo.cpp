#include <iostream>

using namespace std;

void main()
{
	int a = 10;
	int b = 20;

	//1. const����ָ�� --����ָ��
	const int* p = &a; // => const *p (����ָ��)
	//*p = b; //����ָ��ָ����ڴ�ռ�ֵ�����޸�
	p = &b; //ָ��ĵ�ַ��ſ��Ը�

	//2. const���γ��� --ָ�볣��
	int* const p1 = &a; // => const p1 (ָ�볣��)
	*p1 = b; //ָ��ָ����ڴ�ռ��ֵ�����޸�
	//p1 = &b; //����ָ��ĵ�ַ��Ų����޸�

	//3. const������ָ�������γ���
	const int* const p2 = &a;
	//*p2 = b; //����ָ��ָ����ڴ�ռ�ֵ�����޸�
	//p2 = &b; //����ָ��ĵ�ַ��Ų����޸�
}