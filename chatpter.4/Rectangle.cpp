#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle ::Rectangle (const int &x1, const int &y1, const int &x2, const int &y2) :upLeft(x1,x2), lowRight(x2, y2)  //�ݷ� �ʱ�ȭ
{

}

void Rectangle::ShowRecInfo() const
{
	cout << "�� ���: " << '[' << upLeft.GetX() << ",";
	cout << upLeft.GetY() << ']' << endl;
}