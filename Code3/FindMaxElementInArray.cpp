#include <iostream>

using namespace std;

void main()
{
	int arr[] = { 100, 200, 500, 300, 999, 1000, 888888 };
	int maxEle = arr[0]; //Ĭ�Ͻ������е�һ��Ԫ����Ϊ���ֵ������maxEle

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i + 1] > maxEle) //����һλ��Ԫ����Ĭ�ϵ�Ԫ��ֵ���бȽ�
		{
			maxEle = arr[i + 1]; //�����һλ����ǰһλ������һλ��ֵ��ΪĬ��ֵ����maxEle
		}
	}
	cout << "Max element is : " << maxEle << endl;
}
