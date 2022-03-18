#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "벖어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

int Point ::GetX() const 
{
	return x;
}

int Point::GetY() const
{
	return y;
}

bool Point :: SetX(int xpos)
{
	if (0 > xpos || xpos > 100)
	{
		cout << "벗어난 버뉘의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}


bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "벗어난 버뉘의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}


