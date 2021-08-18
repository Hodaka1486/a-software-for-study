#include<iostream>
#include<string>
#include"time_know.h"
using namespace std;
int main()
{
	cout << "欢迎来到计时器 1.1版\n";
	cout << "	请输入 1、2  \n"
		    "1) 计时         2)退出";
	string str_1;
	int test;
	cout << "\n"; 
	
	
	cin >> test;
	while (test!=2)
	{
		switch (test)
		{
		case 1 :
			cout << "请输入begin来开始计时:";
			cin >> str_1;
			if (str_1 == "begin"){time_know_return();} 	
			cout << "	请输入 1、2  \n"
				"1) 计时         2)退出";
		}
		
	
		cin >> test;
	} 
	cout << "thanks for use";
}