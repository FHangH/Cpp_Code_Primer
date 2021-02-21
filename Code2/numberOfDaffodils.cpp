#include <iostream>

using namespace std;

void main()
{
	int dNum = 100; //最小的三位数

	do
	{
		double a, b, c, d; // a为百位，b为十位，c为个位，d为 a b c三次方的和

		//pow(x, y) == x 的 y 次方
		a = pow(dNum / 100, 3);
		b = pow(dNum / 10 % 10, 3);
		c = pow(dNum % 10, 3);
		d = a + b + c;

		//判断当前的三位数是不是水仙花数
		if (d == dNum)
		{
			//条件为真时 打印水仙花数
			cout << dNum << endl;
		}
		dNum++; //每当while条件满足都执行一遍
	} while (dNum < 1000); //判断当前是否是三位数
}
