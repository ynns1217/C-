#include <iostream>
#include "Point1.h"

Point::Point(const int& xpos, const int& ypos)
{
	x = xpos;
	y = ypos;
}

int Point::GetX() const { return x; }
int Point::GetY() const { return y; }

bool Point::SetX(int xpos)
{
	if (0 > xpos || xpos > 100)
	{
		printf("벗어나 법위의 값 전달");
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		printf("벗어나 법위의 값 전달");
		return false;
	}
	y = ypos;
	return true;
}