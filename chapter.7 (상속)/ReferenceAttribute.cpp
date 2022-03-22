#include <iostream>
using namespace std;


class First
{
public:
	void FirstFunc()

	{
		cout << "111: FirstFunc()" << endl;
	}
	virtual void SimpleFunc() { cout << "1111 SimpleFunc()" << endl; }
};

class Second : public First
{
public:
	void SecondFunc() { cout << "222: Secnosdfunc()" << endl; }
	virtual void SiimpleFunc() { cout << "22222 SimpleFunc()" << endl; }
};

class Third : public Second
{
public: 
	void ThirdFunc() { cout << "333 : ThirdFunc() " << endl; }
	virtual void SimpleFunc() { cout << "3333 SimpleFunc()" << endl; }
};

int main(void)
{
	Third obj;
	obj.FirstFunc();
	obj.SecondFunc();
	obj.ThirdFunc();
	obj.SimpleFunc();

	Second & sref = obj;
	sref.FirstFunc();
	sref.SecondFunc();
	sref.SimpleFunc();				//SimpleFunc는 가상함수 이므로 Third클래스에 정의된 SimpleFunc 함수가 호출ㄹ된디ㅏ.

	First& fref = obj;				//obj는 First 간접상속하는 Third 객체이므로 First형 참조자로  참조 가능
	fref.FirstFunc();
	fref.SimpleFunc();

	return 0;
}