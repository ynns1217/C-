#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;

public:
	SelfRef(int n) :num(n)
	{
		cout << "객체생성" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef obj1(obj);				//복사생성자 호출

	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();			//5
	ref.ShowTwoNumber();			//5

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();		//6 
																//8


	//씨쁠의 변수선언
	int num = 10;
	int num1(100);



	return 0;
}