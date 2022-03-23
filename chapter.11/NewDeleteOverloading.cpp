#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	friend ostream& operator <<(ostream& os, const Point& pos);

	void* operator new (size_t size)
	{
		cout << "operator new : " << size << endl;
		void* adr = new char[size];				//실질적인 동적할당
		return adr; 
	}

	void operator delete (void* adr)
	{
		cout << "operator delete() " << endl;
		delete[]adr;
	}
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

int main(void)
{
	Point* ptr = new Point(3, 4);			//static 함수( 프로그램 실행과 동시에 초기화 , 실행) 이기때문에 
	cout << *ptr;
	delete  ptr;

	return 0;
}