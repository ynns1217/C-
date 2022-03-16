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
	void setTime(int ah, int am,int as)		//시간을 세팅하는 함수
	{
		hour = ah;
		min = am;
		sec = as;
		
	}
	void getTime() const	//시간을 출력해주는 함수
	{
		cout << "현재시간은" << hour << "시" << min << "분" << sec << "초 입니다." << endl;
	}
};

int main(void)
{
	Ctime t(11,22,0);
	t.getTime();
	return 0;
}