#include <iostream>
using namespace std;

class Base
{
	int num1;
public:
	Base(int an)
	{
		num1 = an;
		cout << num1 << ":Base 생성자" << endl;
	}

	virtual ~Base()
	{
		cout << num1<<":Base 소멸자" << endl;
	}

	virtual void func()
	{
		cout << "Base::func()" << endl;
	}
};

class Derived :public Base
{
	int num2;
public:
	Derived(int an, int a) :Base(an),num2(a)
	{
		num2 = a;
		cout << num2 << ":Derived생성자" << endl;
	}
	~Derived()
	{
		cout <<num2<< ":Derived 소멸자" << endl;
	}

	void func()
	{
		cout << "Derived::func()" << endl;
	}
};

int main(void)
{
	Base b(1);
	b.func();

	Derived d(2, 22);
	d.func();


	Base* pb = new Derived(3, 33);					//소멸자 호출이 안됨-> 문제가 된다
	pb->func();

	delete pb;										//소멸자 호출 but! 3에대한, Base에 대한 소멸자만 호출(부모 클래스 소멸자만 호출, 자식 클래스 소멸자는 호출이안됨)
													//33은 아직 살아있는것->virtual을 만든후 동적할당하면 문제가되므로 부모 클래스 소멸자와 함수에 virtual을 넣어주어 가상함수로 만들어준다



	return 0;
}