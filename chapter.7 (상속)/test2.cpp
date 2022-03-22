#include <iostream>
using namespace std;

class Base
{
	int num1;
public:
	Base(int an)
	{
		num1 = an;
		cout << num1 << ":Base ������" << endl;
	}

	virtual ~Base()
	{
		cout << num1<<":Base �Ҹ���" << endl;
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
		cout << num2 << ":Derived������" << endl;
	}
	~Derived()
	{
		cout <<num2<< ":Derived �Ҹ���" << endl;
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


	Base* pb = new Derived(3, 33);					//�Ҹ��� ȣ���� �ȵ�-> ������ �ȴ�
	pb->func();

	delete pb;										//�Ҹ��� ȣ�� but! 3������, Base�� ���� �Ҹ��ڸ� ȣ��(�θ� Ŭ���� �Ҹ��ڸ� ȣ��, �ڽ� Ŭ���� �Ҹ��ڴ� ȣ���̾ȵ�)
													//33�� ���� ����ִ°�->virtual�� ������ �����Ҵ��ϸ� �������ǹǷ� �θ� Ŭ���� �Ҹ��ڿ� �Լ��� virtual�� �־��־� �����Լ��� ������ش�



	return 0;
}