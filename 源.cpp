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

	
	
	int test,test_1;//test_1�����ڵ�����ѡ����ȫ��Ψһ
	cout << "�Ƿ�Ҫ����������������ɫ\n""��������101�����������⣺";
	cin >> test;
	if(test==101) color_show();
	system("cls");

	cout << "�Ƿ�����嵥����\n""��������102��";
	cin >> test_1;
	if (test_1 == 102)  system("start listhelp.exe");
	system("cls");

	system("title ����ѧϰ����");
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
			system("title ��ʱ��");
			cout << "������begin����ʼ��ʱ:";
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
			cout << "�Ƿ�Ҫ����ǿ������ģʽ""\n��������153:\n";
			cin >> test;
			system("cls");
			system("title ��ͨ��ʱ");
			if (test == 153) system("title ǿ�ƶ�ʱģʽ");
			time_clock();
			string stop;
			rang();
			if(test == 153)
			{
				cout << "�ػ�";
				system("shutdown /p"); 
			}
			cout << "����q��ֹͣ"; 
			cin >> stop;
			srang(stop);
			display();
			break;
			
		}
		case 3:
		{
			system("cls");
			system("title ǿ�ƶ�ʱ");
			time_clock();
			cout << "�ػ�";
			//system("pause");
			system("shutdown /p");
			break;
		}
		
		}
		cout << "��ѡ�������Ҫ����ѡ��";
		cin >> test;
	} 
	cout << "Thanks for use";
	system("pause");
}