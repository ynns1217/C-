#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996)


class Human
{
private:
	char name[20];
	int age;


public:
	Human(const char* name, int age)
	{		
		cout << "일반 생성자호출 " << endl;
		strcpy(this->name, name);
		this->age = age;

	}

	Human(const Human& copy)		//lvalue 참조
	{
		cout << "복사생성자 호출" << endl;
		strcpy(this->name, copy.name);
		this ->age = copy.age;
	}

	Human(const Human&& move)		//rvalue 참조
	{
		cout << "이동생성자 호출" << endl;
		strcpy(this->name, move.name);
		this->age = move.age;
	}

	void viewHuman()
	{
		cout << "이름:" << name << "," << "나이:" << age << endl;
	}
};

int main()
{
	Human h1("홍기롱", 30);
	h1.viewHuman();


	Human h2(h1);			//복사생성자가 디폴트로 생성된다.
	h2.viewHuman();

	Human h3(move(h1));			//이동 생성자호출하기위해 lvalue를 rvalue로 바꾼다 move함수를 사용한다.
	h3.viewHuman();

	return 0;
}