//상속의 깊이를 하나 더 해서 작성

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
		cout << "요청 내용을 계산합니다." << endl;
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
			cout << "충전이 필요합니다." << endl;
			return;
		}
		cout << "이동하면서";
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
			cout << "충전이 필요합니다." << endl;
			return;
		}
		if (strcmp(restPenModel, penInfo) != 0)
		{
			cout << "등록된 펜이 아닙니다.";
			return;
		}

		cout << "필기 내용을 처리합니다." << endl;
		UseBattery();
	}
};

int main(void)
{
	NotebookComp nc("이수종", 5);
	TabletNotebook tm("정수영", 5, "뭔기종이고");
	nc.MovingCal();
	tm.Write("그래그 기종");
	return 0;
}