#include <iostream>
#include <time.h> //ʹ�����������Ҫ��ӵ�ͷ�ļ�

using namespace std;

void main()
{
	int randNum;
	int enterNum;
	int countNum = 0;

	//ͨ��ϵͳʵʱ��ʱ����Ϊ��ǰ��������������
	srand((unsigned int)time(NULL));

	//��ʱ��randNumΪ�����
	randNum = rand() % 100 + 1;

	//ÿѭ��һ�� countNum �� 1 ��Ϊ�����ִ�У�Ϊ��ֱ�ӽ���
	while (countNum < 10) 
	{
		//��ʾ��ǰִ�еĴ���
		cout << "******** " << countNum + 1 << " ********" << endl; 

		cout << "Enter Num : ";
		cin >> enterNum;

		if (enterNum > randNum)
		{
			cout << "enter num is to big !\n" << endl;
			countNum++; //ֻҪenterNum != randNum �� countNum �� 1
		}
		else if (enterNum < randNum)
		{
			cout << "enter num is to small !\n" << endl;
			countNum++;
		}
		else 
		{
			cout << "enter num is true !" << endl;
			break; //enterNum == randNum �� ����
		}
	}

	cout << "\nTrue num is : " << randNum << endl; //while ������ ��ʾ��ȷ�������ֵ
}
