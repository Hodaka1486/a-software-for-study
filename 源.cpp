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
	cout << "��������ϲ������ɫ  ��һ����Ӧ�ڱ������ڶ�����Ӧ��ǰ��   \n"
		"0 = ��ɫ 8 = ��ɫ��������ɫ����\n"
		"1 = ��ɫ 9 = ����ɫ\n"
		"2 = ��ɫ A = ����ɫ\n"
		"3 = ����ɫ B = ������ɫ\n"
		"4 = ��ɫ C = ����ɫ\n"
		"5 = ��ɫ D = ����ɫ\n"
		"6 = ��ɫ E = ����ɫ\n"
		"7 = ��ɫ F = ����ɫ\n""����������3A����ǰ��Ϊ����ɫǰ��Ϊ����ɫ(������һ��ΪĬ��)\n";
	char color[3];
	cin.getline(color, 3);
	//cout << color[0]<<color[1];
	char site[9] = "color ";
	strcat_s(site, color);
	//cout << site;
	system(site);
	system("pause");
	
	system("title ����ѧϰ����");
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
			system("cls");
			system("title ��ͨ��ʱ");
			time_clock();
			string stop;
			rang();
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
			string stop;
			rang();
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
}