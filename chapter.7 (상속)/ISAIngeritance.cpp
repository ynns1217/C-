//����� ���̸� �ϳ� �� �ؼ� �ۼ�

#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class Computer
{
private:
	char owner[50];
public:
	Computer(const char* name)
	{
		strcpy(owner, name);
	}
	void Calculate()
	{
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int Battery;
public:
	NotebookComp(const char* name, int initChang) :Computer(name), Battery(initChang)
	{}
	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	int GetBatteryInfo() { return Battery; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		cout << "�̵��ϸ鼭";
		Calculate();
		UseBattery();
	}
};

class TabletNotebook : public NotebookComp
{
private:
	char restPenModel[50];
public:
	TabletNotebook(const char * name, int initChang,const  char * pen) : NotebookComp(name,initChang)
	{
		strcpy(restPenModel, pen);
	}
	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		if (strcmp(restPenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}

		cout << "�ʱ� ������ ó���մϴ�." << endl;
		UseBattery();
	}
};

int main(void)
{
	NotebookComp nc("�̼���", 5);
	TabletNotebook tm("������", 5, "�������̰�");
	nc.MovingCal();
	tm.Write("�׷��� ����");
	return 0;
}