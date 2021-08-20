#include<iostream>
#include<stdlib.h>
#include<string>
#include"color_show.h"
using namespace std;
string to_do[35],none;
int n,s=0,m;
void to_do_list();
void list_show();
void clear(int x);
int main() 
{
	color_show();
	system("cls");
	system("title 清单工具");
	cout << "欢迎使用清单工具\n";
	to_do_list();
	system("cls");
	;
	while (s<n)
	{
		cout << "当前还剩：\n";
		list_show();
		cout << "做好哪个就输入第几个做好了如：输入3代表第三个做好了:";
		cin >> m;
		clear(m);
	}
	cout << "恭喜完成本次所有计划\n";
	system("pause");
}
void to_do_list()
{
	cout << "请输入要做几项事情：\n";
	cin >> n;
	cout << "请输入要做的事项(写一个就按一个回车)：\n";
	for (int i = 0; i < n+1; i++)
	{
		getline(cin, to_do[i]);
	}
	
}
void list_show()
{
	for (int i = 0; i < n+1; i++)
	{
		cout << to_do[i]<<"\n";
	}
}
void clear(int x)
{
	to_do[x] = none;
	s++;
}