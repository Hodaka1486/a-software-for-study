//��ʱ��
//������3��������hour,minute,second)���˽��ܲ�����һ����ʾ��ʼ�Ĵ�
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
	cout << "������Ҫ�ƶ�����ʱ��Ķ�ʱ" << "\n   Сʱ:";
	cin >> hour;
	cout << "���ӣ�";
	cin >> minute;
	cout << "�룺";
	cin >> second;
	delay = (3600 * long(hour) + 60 * long(minute) + long(second)) * CLOCKS_PER_SEC;
	cout << "����begin����ʼ��ʱ";
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
		cout << "����������˱��μ�ʱ";
	}*/

}


