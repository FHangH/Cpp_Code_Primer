#include <iostream>

using namespace std;

void main()
{
	for (int i = 1; i <= 100; i++) //循环打印 1 - 100 
	{
		//判断遍历的数字是否满足条件
		if (i % 10 == 7 || i / 10 % 10 == 7 || i % 7 == 0)
		{
			cout << "Yes" << endl; //满足调件打印 yes
		}
		else
		{
			cout << i << endl; //不满足条件打印 原数字
		}
	}
}
