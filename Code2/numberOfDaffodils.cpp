#include <iostream>

using namespace std;

void main()
{
	int dNum = 100; //��С����λ��

	do
	{
		double a, b, c, d; // aΪ��λ��bΪʮλ��cΪ��λ��dΪ a b c���η��ĺ�

		//pow(x, y) == x �� y �η�
		a = pow(dNum / 100, 3);
		b = pow(dNum / 10 % 10, 3);
		c = pow(dNum % 10, 3);
		d = a + b + c;

		//�жϵ�ǰ����λ���ǲ���ˮ�ɻ���
		if (d == dNum)
		{
			//����Ϊ��ʱ ��ӡˮ�ɻ���
			cout << dNum << endl;
		}
		dNum++; //ÿ��while�������㶼ִ��һ��
	} while (dNum < 1000); //�жϵ�ǰ�Ƿ�����λ��
}
