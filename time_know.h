#include<ctime>
#include<iostream>
#include<string>
using namespace std;

void time_know_return()
{
	string test;
	double second;
	int minute, hour;
	clock_t start = clock();
	cout << "输入stop来暂停计时";
	//clock_t last = clock();
	//test = (clock() - start)/CLOCKS_PER_SEC;
	cin >> test;
	if(test=="stop")
	{
		second = double(clock() - start) / 1000.0;
		hour = int((second) / 3600.0);
		minute = ((int)second % 3600 )/ 60;
		second = second - hour * 3600 - minute * 60;
		cout << "\n现在以及用时:" <<hour<<"小时 "<<minute<<"分钟"<< second << "  秒\n"; 
	}
	//cout << "\n按press退出";
	//cin >> test;
}