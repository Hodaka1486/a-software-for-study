#include<iostream>
#include<string>
#include"time_know.h"
using namespace std;
int main()
{
	cout << "��ӭ������ʱ�� 1.1��\n";
	cout << "	������ 1��2  \n"
		    "1) ��ʱ         2)�˳�";
	string str_1;
	int test;
	cout << "\n"; 
	
	
	cin >> test;
	while (test!=2)
	{
		switch (test)
		{
		case 1 :
			cout << "������begin����ʼ��ʱ:";
			cin >> str_1;
			if (str_1 == "begin"){time_know_return();} 	
			cout << "	������ 1��2  \n"
				"1) ��ʱ         2)�˳�";
		}
		
	
		cin >> test;
	} 
	cout << "thanks for use";
}