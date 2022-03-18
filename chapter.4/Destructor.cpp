#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름:" << name << endl;
		cout << "나이:" << age << endl;
	}
	~Person()
	{
		delete[]name;				//name이 배열 형태인것을 보여주면서 소멸자도 배열로 
		cout << "called destrtuctor" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 20);
	Person man2("Jang dong gun", 41);

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
