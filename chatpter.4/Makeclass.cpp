#include <iostream>
using namespace std;

class Ctime
{
private:
	int hour;
	int min;
	int sec;

public:
	Ctime(int ah=0, int am=0, int as=0)
	{
		hour = ah;
		min = am;
		sec = as;
	}
	void setTime(int ah, int am,int as)		//�ð��� �����ϴ� �Լ�
	{
		hour = ah;
		min = am;
		sec = as;
		
	}
	void getTime() const	//�ð��� ������ִ� �Լ�
	{
		cout << "����ð���" << hour << "��" << min << "��" << sec << "�� �Դϴ�." << endl;
	}
};

int main(void)
{
	Ctime t(11,22,0);
	t.getTime();
	return 0;
}