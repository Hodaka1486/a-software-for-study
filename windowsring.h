//����һ����������ͷ�ļ�
//rang()����������100��
//srang()��Ҫ��������������һֱ��
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
void srang(string x)//ֻ������һ����     ���˳�������q
{
	while (x != "q")
	{
		MessageBeep(1);
		Sleep(2000);
		MessageBeep(20);
	}
}