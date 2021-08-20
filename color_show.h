#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;
void color_show()
{
	cout << "请输入所喜欢的颜色  第一个对应于背景，第二个对应于前景   \n"
		"0 = 黑色 8 = 灰色（“亮黑色”）\n"
		"1 = 蓝色 9 = 亮蓝色\n"
		"2 = 绿色 A = 亮绿色\n"
		"3 = 湖蓝色 B = 亮湖蓝色\n"
		"4 = 红色 C = 亮红色\n"
		"5 = 紫色 D = 亮紫色\n"
		"6 = 黄色 E = 亮黄色\n"
		"7 = 白色 F = 亮白色\n""举例：输入3A代表前景为湖蓝色前景为亮红色\n"
		"(不输哪一项为默认)\n";
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