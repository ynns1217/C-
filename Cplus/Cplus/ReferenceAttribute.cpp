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
	sref.SimpleFunc();				//SimpleFunc�� �����Լ� �̹Ƿ� ThirdŬ������ ���ǵ� SimpleFunc �Լ��� ȣ�⤩�ȵ�.

	First& fref = obj;				//obj�� First ��������ϴ� Third ��ü�̹Ƿ� First�� �����ڷ�  ���� ����
	fref.FirstFunc();
	fref.SimpleFunc();

	return 0;
}