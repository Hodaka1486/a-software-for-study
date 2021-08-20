#include<iostream>
#include<string>
#include<stdlib.h>
#include"time_know.h"
#include"display(option).h"
#include"windowsring.h"
#include"time_clock.h"
#include"color_show.h"
using namespace std;
int main()
{

	
	
	int test,test_1;//test_1作用于单独的选择且全程唯一
	cout << "是否要调整背景或字体颜色\n""是请输入101否则输入任意：";
	cin >> test;
	if(test==101) color_show();
	system("cls");

	cout << "是否采用清单工具\n""是请输入102：";
	cin >> test_1;
	if (test_1 == 102)  system("start listhelp.exe");
	system("cls");

	system("title 自律学习工具");
	display();
	string str_1;
	cout << "\n"; 
	cin >> test;
	while (test!=4)
	{
		switch (test)
		{
		case 1: 
		{
			system("cls");
			system("title 计时器");
			cout << "请输入begin来开始计时:";
			cin >> str_1;
			if (str_1 == "begin") { time_know_return(); }
			system("pause");
			system("cls");
			display();
			system("pause");
			break;
		}
		case 2: 
		{
			cout << "是否要采用强制自律模式""\n是请输入153:\n";
			cin >> test;
			system("cls");
			system("title 普通定时");
			if (test == 153) system("title 强制定时模式");
			time_clock();
			string stop;
			rang();
			if(test == 153)
			{
				cout << "关机";
				system("shutdown /p"); 
			}
			cout << "输入q来停止"; 
			cin >> stop;
			srang(stop);
			display();
			break;
			
		}
		case 3:
		{
			system("cls");
			system("title 强制定时");
			time_clock();
			cout << "关机";
			//system("pause");
			system("shutdown /p");
			break;
		}
		
		}
		cout << "请选择接下来要做的选择";
		cin >> test;
	} 
	cout << "Thanks for use";
	system("pause");
}