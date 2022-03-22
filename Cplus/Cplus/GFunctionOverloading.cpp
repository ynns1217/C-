//연산자를 오버로딩하는 두가지 방법
//1.멤버함수에 의한 연산자 오버로딩     pos1.operator+(pos2);    [우선ㅅㅣ]
//2. 전역함수에 의한 연산자 오버로딩    operator+(pos1,pos2);


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

	friend Point operator+(const Point& pos1, const Point& pos2);


	friend Point operator+(const Point & ref1, const Point & ref2);			//operator + 라는 이름의 함수

};

Point operator+(const Point& pos1, const Point& pos2)			//operator + 라는 이름의 함수
	{
		Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
		return pos;
	}

Point operator+(const Point & ref1, const Point & ref2)			//operator + 라는 이름의 함수
{
	Point pos(ref1.xpos + ref2.xpos, ref1.ypos + ref2.ypos);
	return pos;
}


int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos4 = pos1 + pos2;					//operator+ 함수가 없으면 오류 뜬다
	Point pos5 = pos1 + 100;  //pos1.operater+(100)

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos4.ShowPosition();		//13,24

	return 0;
}