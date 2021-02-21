#include <iostream>

using namespace std;

void main()
{
	//从1 -100 遍历100次
	for (int i = 1; i <= 100; i++)
	{
		//如果i 为偶数，则跳过当前循环，执行下一次遍历
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
}
