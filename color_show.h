#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;
void color_show()
{
	cout << "��������ϲ������ɫ  ��һ����Ӧ�ڱ������ڶ�����Ӧ��ǰ��   \n"
		"0 = ��ɫ 8 = ��ɫ��������ɫ����\n"
		"1 = ��ɫ 9 = ����ɫ\n"
		"2 = ��ɫ A = ����ɫ\n"
		"3 = ����ɫ B = ������ɫ\n"
		"4 = ��ɫ C = ����ɫ\n"
		"5 = ��ɫ D = ����ɫ\n"
		"6 = ��ɫ E = ����ɫ\n"
		"7 = ��ɫ F = ����ɫ\n""����������3A����ǰ��Ϊ����ɫǰ��Ϊ����ɫ\n"
		"(������һ��ΪĬ��)\n";
	char color[4];
	//cin.get();
	cin.get(color, 3);
	//cin.getline(color, 3);
	//cout << color[0]<<color[1];
	char site[9] = "color ";
	strcat_s(site, color);
	//cout << site;
	system(site);
	system("pause");
	cin.get();
}