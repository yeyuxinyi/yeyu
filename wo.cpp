#include<iostream>
#include<string>
using namespace std;
int x = 1;
int main()
{
	for (int i = 0; i < 9; i++)
	{
		x = (x + 1) * 2;
	}
	cout << "第一天猴子摘得桃子数量：" <<x<< endl;

}
