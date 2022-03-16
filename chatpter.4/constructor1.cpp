//생성자 찾는법( constructor )
//1. 클래스 이름이랑 같다
//2. void가  없다

//생성자는 멤버변수를 초기화시켜주는 매서드다

#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	/*
	SimpleClass()				//멤버변수를 초기화하는 생성자
	{
		num1 = 0;
		num2 = 0;
	}

	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	*/

	//위에 세 생성자를 한번에 정의할 수 있음
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}