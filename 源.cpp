#include<iostream>
#include<cstring>
#include<string>
#include"time_know.h"
#include"display(option).h"
#include<stdlib.h>
#include"windowsring.h"
#include"time_clock.h"
using namespace std;
int main()
{
	cout << "请输入所喜欢的颜色  第一个对应于背景，第二个对应于前景   \n"
		"0 = 黑色 8 = 灰色（“亮黑色”）\n"
		"1 = 蓝色 9 = 亮蓝色\n"
		"2 = 绿色 A = 亮绿色\n"
		"3 = 湖蓝色 B = 亮湖蓝色\n"
		"4 = 红色 C = 亮红色\n"
		"5 = 紫色 D = 亮紫色\n"
		"6 = 黄色 E = 亮黄色\n"
		"7 = 白色 F = 亮白色\n""举例：输入3A代表前景为湖蓝色前景为亮红色(不输哪一项为默认)\n";
	char color[3];
	cin.getline(color, 3);
	//cout << color[0]<<color[1];
	char site[9] = "color ";
	strcat_s(site, color);
	//cout << site;
	system(site);
	system("pause");
	
	system("title 自律学习工具");
	display();
	
	string str_1;
	int test;
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
			system("cls");
			system("title 普通定时");
			time_clock();
			string stop;
			rang();
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
			string stop;
			rang();
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
}