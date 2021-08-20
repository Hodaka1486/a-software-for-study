//这是一个响铃声的头文件
//rang()响铃声会有100次
//srang()需要传入响铃条件会一直响
#include<Windows.h>
#include<string>
using namespace std;
void rang()
{
	for (int i = 0; i < 100; i++)
	{
		MessageBeep(1);
		Sleep(2000);
		MessageBeep(20);
	}
}
void srang(string x)//只能输入一个词     若退出则输入q
{
	while (x != "q")
	{
		MessageBeep(1);
		Sleep(2000);
		MessageBeep(20);
	}
}