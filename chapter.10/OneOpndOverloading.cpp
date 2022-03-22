//


#include <iostream>
using namespace std;

class Point
{
private:
	

public:
	
	int xpos, ypos;						

	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}

	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	Point& operator++()
	{
		xpos += 1;
		ypos += 1;

		return *this;
	}

	friend Point& operator--(Point& ref);
};

Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	
	return ref;
}

ostream& operator<<(ostream& os, const Point& other)			//������ public�ؾ� Ȱ�밡��
{
	os << other.xpos << "," << other.ypos << ']' << endl;

	return os;
}

int main(void)
{
	Point pos(1, 2);
	++pos;
	pos.ShowPosition();
	--pos;
	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();

	--(--pos);
	pos.ShowPosition();

	return 0;
}