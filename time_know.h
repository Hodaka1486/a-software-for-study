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
	cout << "����stop����ͣ��ʱ";
	//clock_t last = clock();
	//test = (clock() - start)/CLOCKS_PER_SEC;
	cin >> test;
	if(test=="stop")
	{
		second = double(clock() - start) / 1000.0;
		hour = int((second) / 3600.0);
		minute = ((int)second % 3600 )/ 60;
		second = second - hour * 3600 - minute * 60;
		cout << "\n�����Լ���ʱ:" <<hour<<"Сʱ "<<minute<<"����"<< second << "  ��\n"; 
	}
	//cout << "\n��press�˳�";
	//cin >> test;
}