#include <iostream>
using namespace std;

class BaseOne
{
public:
	void SimpleFunc() { cout << "BaseOne" << endl; }

};

class BaseTwo
{
public:
	void SimpleFunc() { cout << "BaseTwo" << endl; }
};

class MultiDerived : public BaseOne, protected BaseTwo
{
public:
	void Complexfunc()
	{
		BaseOne::SimpleFunc();
		BaseTwo::SimpleFunc();
	}
};


int mian(void)
{
	MultiDerived mdr;
	mdr.Complexfunc();

	return 0;
}