#include <iostream>
using namespace std;

template <typename T1, typename T2>
class MySimple
{
public:
	voidWhoAreYou()
	{
		cout << "size of T1:" << sizeof(T1) << endl;
		cout << "size ofT2:" << sizeof(T2) << endl;
		cout << "<typename T1, typename T2>" << endl;
	}
};

template <>
class MySimple<int, double>
{
public:
	void WhoAreYou()
	{
		cout << "size of int:" << sizeof(int) << endl;
		cout << "size of double: " << sizeof(double) << endl;
		cout << "<int,double>" << endl;
	}
};


//template <typename T1>
//class MySimple <T1, double>
//{
//public:
//	void WhoAreYou()
//	{
//		cout << "size of T1:" << sizeof(T1) << endl;
//		cout << "size of double:" << sizeof(double) << enld;
//		cout << "<T1,double>" << endl;
//	}
//};


int main(void)
{
	MySimple<char, double> obj1;
	obj1.voidWhoAreYou();
	MySimple<int, long> obj2;
	obj2.voidWhoAreYou();
	MySimple<int, double> obj3;
	obj3.WhoAreYou();

	return 0;
}