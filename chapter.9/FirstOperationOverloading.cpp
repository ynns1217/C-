#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}


	void ShowPosition() const
	{
		cout << "[" << xpos << "," << ypos << ']' << endl;
	}


	Point operator+(const Point& ref)			//operator + 라는 이름의 함수
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}


	Point operator+(int n)
	{
		return Point(xpos + n, ypos + n);
	}
};

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);			//operator은 그냥 붙인거고 실제로 +가 함수 이름임
	Point pos4 = pos1 + pos2;					//operator+ 함수가 없으면 오류가 뜬다
	Point pos5 = pos1 + 100;  //pos1.operater+(100)

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();			//13,24
	pos4.ShowPosition();

	return 0;
}