#include<iostream>
#include "ArrayTemplate.h"
#include "PointTemplate.h"
using namespace std;

int main(void)
{
	BoundCheckArray<Point<int>> oarr1(3);
	oarr1[0] = Point<int>(3, 4);
	oarr1[1] = Point<int>(5, 6);
	oarr1[2] = Point<int>(7, 8);

	for (int i = 0;i < oarr1.GetArrLen(); i++)
		oarr1[i].ShowPosition();


	BoundCheckArray<Point<double>> oarr2(3);
	oarr1[0] = Point<int>(3.12, 4.21);
	oarr1[1] = Point<int>(5.36, 6.89);
	oarr1[2] = Point<int>(7.56, 8.21);

	for (int i = 0; i < oarr1.GetArrLen(); i++)
		oarr1[i].ShowPosition();

	typedef Point<int>* POINT_PTR;
	BoundCheckArray<POINT_PTR> oparr(3);
	oarr1[0] = Point<int>(11,12);
	oarr1[1] = Point<int>(13, 14);
	oarr1[2] = Point<int>(15, 16);

	for (int i = 0; i < oarr1.GetArrLen(); i++)
		oparr[i]->ShowPosition();

	delete oparr[0];
	delete oparr[1];
	delete oparr[2];

	return 0;
}