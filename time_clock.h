//定时器
//会输入3个参数（hour,minute,second)按此接受并会有一个提示开始的词
#include<iostream>
#include<string>
#include<ctime>
#include<Windows.h>
using namespace std;
void time_clock(/**/)
{
	int hour,  minute,  second;
	long delay;
	string begin;
	cout << "请输入要制定多少时间的定时" << "\n   小时:";
	cin >> hour;
	cout << "分钟：";
	cin >> minute;
	cout << "秒：";
	cin >> second;
	delay = (3600 * long(hour) + 60 * long(minute) + long(second)) * CLOCKS_PER_SEC;
	cout << "输入begin来开始计时";
	cin >> begin;
	if (begin == "begin")
	{
		clock_t start = clock();
		while (clock() - start < delay)
		{
			Sleep(1000);
		}

	}
	/*else
	{
		cout << "看来你放弃了本次计时";
	}*/

}


