#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	friend ostream& operator <<(ostream& os, const Point& pos);

	static void* operator  new(size_t size)
	{
		cout << "operator new:" << size << endl;
		void* adr = new char[size];
		return adr;
	}


	static void* operator new[](size_t size)
	{
		cout << "operater new[] :" << size << endl;
		void* adr = new char[size];
		return adr;
	}

		void operator delete (void* adr)
	{
		cout << "operator delete() " << endl;
		delete[]adr;
	}

	void operator delete[](void* adr)
	{
		cout << "operator delete[]() " << endl;
		delete[]adr;
	}

	static void Point_static();
};

void Point::Point_static()
{
	cout << "Point::Point_static()" << endl;
}

//void Point:: Point_founc()				
//{
//	cout << "Point::Point_static()" << endl;
//}

ostream& operator <<(ostream& os, const Point& pos)
{
	os << "operator delete[]() " << endl;
	return os;
}

int main(void)
{
	Point* ptr = new Point(3, 4);
	cout << *ptr;
	ptr->Point_static();
	Point* arr = new Point[3];

	delete ptr;
	delete[]arr;

	Point::Point_static();

	return 0;
}