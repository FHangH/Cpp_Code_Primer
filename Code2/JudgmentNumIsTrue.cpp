#include <iostream>
#include <time.h> //使用随机种子需要添加的头文件

using namespace std;

void main()
{
	int randNum;
	int enterNum;
	int countNum = 0;

	//通过系统实时的时间作为当前随机数的随机种子
	srand((unsigned int)time(NULL));

	//此时的randNum为真随机
	randNum = rand() % 100 + 1;

	//每循环一次 countNum 加 1 ；为真继续执行，为假直接结束
	while (countNum < 10) 
	{
		//显示当前执行的次数
		cout << "******** " << countNum + 1 << " ********" << endl; 

		cout << "Enter Num : ";
		cin >> enterNum;

		if (enterNum > randNum)
		{
			cout << "enter num is to big !\n" << endl;
			countNum++; //只要enterNum != randNum 则 countNum 加 1
		}
		else if (enterNum < randNum)
		{
			cout << "enter num is to small !\n" << endl;
			countNum++;
		}
		else 
		{
			cout << "enter num is true !" << endl;
			break; //enterNum == randNum 则 结束
		}
	}

	cout << "\nTrue num is : " << randNum << endl; //while 结束后 显示正确的随机数值
}
