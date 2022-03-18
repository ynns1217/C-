#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle ::Rectangle (const int &x1, const int &y1, const int &x2, const int &y2) :upLeft(x1,x2), lowRight(x2, y2)  //콜론 초기화
{

}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단: " << '[' << upLeft.GetX() << ",";
	cout << upLeft.GetY() << ']' << endl;
}